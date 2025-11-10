#include "graph.h"
#include <string.h>
#include <stdio.h>

Graph create_graph() {
  Graph graph;
  graph.num_vertices = 0;
  graph.num_edges = 0;
  return graph;
}

void add_vertex_to_graph(Graph* graph, char* name) {
  if(graph -> num_vertices >= MAX_VERTICES) {
    puts("Max number of vertices reached!");
    return;
  }

  strncpy(graph -> vertices[graph -> num_vertices].name, name, MAX_NAME_LEN - 1);
  graph -> vertices[graph -> num_vertices].name[MAX_NAME_LEN - 1] = '\0';
  graph -> num_vertices++;

}

void add_edge_to_graph(Graph* graph, int source, int target, int distance){

  if(graph -> num_edges >= MAX_EDGES){
    puts("Max edge limit reached!!");
    return;
  }

  if(source < 0 || source >= graph -> num_vertices ||
     target < 0 || target >= graph -> num_vertices) {
  
    puts("Invalid vertex index!");
    return;
  }


  graph -> edges[graph -> num_edges].source_idx = source;
  graph -> edges[graph -> num_edges].target_idx = target;
  graph -> edges[graph -> num_edges].distance = distance;

  graph -> num_edges++;

}

void print_graph(Graph* graph) {

  printf("Graph has %d edges and %d vertices.\n", graph -> num_edges, graph -> num_vertices);
  puts("--vertices--");
  for(int i = 0; i < graph->num_vertices; i++){
    printf("Vertex %d: %s\n", i, graph->vertices[i].name);
  }
  puts("--edges--");
  for(int i = 0; i < graph->num_edges; i++){
    int source = graph->edges[i].source_idx;
    int target = graph->edges[i].target_idx;
    int distance = graph->edges[i].distance;

    char* source_name = graph->vertices[source].name;
    char* target_name = graph->vertices[target].name;
    printf("%d: %s(%d) ---%d---> %s(%d)\n", i, source_name, source, distance, target_name, target);
  }
  puts("------");

}
