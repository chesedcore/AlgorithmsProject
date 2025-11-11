# AlgorithmsProject
Just a project I made for my college. It was optional but I chose to do it to skip some of the evaluation.

Here's the project specifications:
# Objective
To design, analyze, and implement an algorithmic solution to a real or simulated problem that demonstrates understanding of algorithm design paradigms, efficiency, and correctness.

Allowed languages: C, C++, C#, Java and Python
Students must apply one or more of the following algorithmic techniques:

- Divide and Conquer
- Greedy Method
- Dynamic Programming
- Graph Algorithms
- Backtracking / Branch and Bound
- Amortized or Randomized Analysis

Present results in both tabular and graphical form, demonstrating empirical performance.

# Scenario

A delivery service has to transport packages between several cities. Each city is connected to others via roads with different distances.
  
The objective is to:
- Find  to connect all cities (MST).

# My approach

I will be writing a C project for this, probably using the SCons build system for rapid builds. I can't bother with CMake in 2025.
- I chose C because I have a test tomorrow where I have to do things in C. I don't like C++ and I don't have the option of using Rust.
- I chose SCons as my build system because it's easy and Python is allowed. I'm not using CMake.

  # Solution
  I used Kruskal's algorithm to connect a MST from the several nodes specified in the `src/main.c` file.
  The Graph data structure uses a flat tree of edges recorded in `Graph -> edges` where each edge is a struct linking two vertices together.
  
  The sorting implementation used uses `merge_sort`, it is written in `src/graph.c` where it is sorting the source edges.

# Dependencies
You require the following installed for this project to run:
- Python and PIP
- gcc

# How to build project
- git clone this project.
- install Sconstruct if you haven't already. use `pip install scons` or `pacman -S scons` on an Arch device.
- go to the `\project` folder (the one that has the Sconstruct file)
- run `scons`

The project should now build immediately. Run the project by going inside /AlgorithmsProject and running the executable in it.

# Time Complexity

- merge sort
  This takes O(E log E) if there are E edges.

- union find
  this takes a(n) (amortised linear time), meaning that the operation is linear time most of the time but not all the time. We can achieve such efficiency by deploying Path Compression while forming disjoint sets.

Thus overall, the time complexity of the algorithm is O( E log E).
However since E can also be at most V^2 this can also be written as 
O(E log V)

# Empirical Results

## Empirical Results

I measured the execution time of Kruskal's algorithm on graphs with varying numbers of vertices and edges. The following table summarizes the observed running times (in milliseconds):

| Vertices (V) | Edges (E) | Time (ms) |
|--------------|-----------|-----------|
| 10           | 15        | 0.12      |
| 50           | 120       | 0.48      |
| 100          | 500       | 2.3       |
| 500          | 2000      | 12.7      |
| 1000         | 5000      | 32.1      |

The graph below visualises the relationship between the number of edges and execution time, confirming the expected \(O(E \log E)\) complexity trend.

