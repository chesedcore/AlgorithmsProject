#include "graph.h"

#ifndef DISJOINT_SET_H
#define DISJOINT_SET_H

//types

typedef struct {
  int parents[MAX_VERTICES];
} DisjointSet;

//main

DisjointSet create_disjoint_set(int num_vertices);
int find_set(DisjointSet* ds, int target);
void unify_sets(DisjointSet* ds, int a, int b);

#endif
