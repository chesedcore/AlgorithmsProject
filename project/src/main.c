#include <stdio.h>
#include "graph.h"

int main() {

  Graph g = create_graph();

  add_vertex_to_graph(&g, "London");
  add_vertex_to_graph(&g, "Bristol");

  add_edge_to_graph(&g, 0, 1, 50);

  print_graph(&g);
  
  return 0;
}
