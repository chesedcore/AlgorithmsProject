#include "kruskal.h"
#include <stdio.h>

void print_kruskal_mst(Graph* g){
  
  puts("Sorting edges...");
  sort_edges(g);
  print_graph(g);
  puts("---");

  DisjointSet ds = create_disjoint_set(g->num_vertices);

  int edges_in_mst = 0;

  puts("--calculating MST--");

  for(int i = 0; i < g->num_edges && edges_in_mst < g->num_vertices - 1; i++){
    Edge edge = g -> edges[i];

    int source_v = edge.source_idx;
    int target_v = edge.target_idx;

    int set_a = find_set(&ds, source_v);
    int set_b = find_set(&ds, target_v);

    if(set_a != set_b){
      unify_sets(&ds, set_a, set_b);
      edges_in_mst++;
      printf("%s(%d) --%d--> %s(%d)\n", g->vertices[source_v].name, source_v, edge.distance, g->vertices[target_v].name, target_v);
    }
  }

  printf("----MST complete with %d edges----\n", edges_in_mst);

}
