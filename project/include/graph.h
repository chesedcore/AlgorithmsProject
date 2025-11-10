#ifndef GRAPH_H
#define GRAPH_H

//consts

#define MAX_VERTICES 100
#define MAX_EDGES 100
#define MAX_NAME_LEN 32

//types

typedef struct {
  char name[MAX_NAME_LEN];
} Vertex;

typedef struct {
  int source_idx;
  int target_idx;
  int distance;
  int toll;
} Edge;

typedef struct {
  int num_vertices;
  int num_edges;
  Vertex vertices[MAX_VERTICES];
  Edge edges[MAX_EDGES];
} Graph;

//main

Graph create_graph();
void add_vertex_to_graph(Graph* graph, char* name);
void add_edge_to_graph(Graph* graph, int source_idx, int target_idx, int distance, int toll);


#endif
