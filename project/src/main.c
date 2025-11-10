#include <stdio.h>
#include "graph.h"
#include "kruskal.h"

int main() {

  Graph g = create_graph();

  add_vertex_to_graph(&g, "London");     //0
  add_vertex_to_graph(&g, "Bristol");    //1
  add_vertex_to_graph(&g, "Birmingham"); //2
  add_vertex_to_graph(&g, "Edinburgh");  //3
  add_vertex_to_graph(&g, "Loch Ness");   //4

  add_edge_to_graph(&g, 0, 1, 50);
  add_edge_to_graph(&g, 3, 1, 100);
  add_edge_to_graph(&g, 4, 0, 30);
  add_edge_to_graph(&g, 1, 2, 10);
  add_edge_to_graph(&g, 3, 0, 70);
  add_edge_to_graph(&g, 2, 4, 60);

  print_kruskal_mst(&g);
  
  return 0;
}
