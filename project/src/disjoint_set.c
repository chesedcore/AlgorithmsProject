#include <stdio.h>
#include "disjoint_set.h"

DisjointSet create_disjoint_set(int num_vertices) {
  DisjointSet ds;
  for(int i = 0; i < num_vertices; i++){
    ds.parents[i] = i;
  }
  return ds;
}

int find_set(DisjointSet* ds, int target) {

  int root = target;
  while(ds->parents[root] != root){
    root = ds->parents[root];
  }

  //perform path compression
  while(root != target){
    int parent = ds->parents[target];
    ds->parents[target] = root;
    target = parent;
  }

  return root;

}

void unify_sets(DisjointSet* ds, int a, int b){

  int set_a = find_set(ds, a);
  int set_b = find_set(ds, b);

  if(set_a == set_b) return; //already unified
  
  ds->parents[set_a] = set_b;

}


