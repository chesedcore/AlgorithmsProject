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

A delivery service has to transport packages between several cities. Each city is connected to others via roads with different distances and toll costs.
- Each delivery vehicle has limited capacity (in kg).
- Packages have different weights and profits (priority or value).
  
The objective is to:
- Find  to connect all cities (MST).
- Determine  between source and destination (Dijkstra).
- by loading packages optimally under vehicle weight limit (Greedy Knapsack).

# My approach

I will be writing a C project for this, probably using the SCons build system for rapid builds. I can't bother with CMake in 2025.
- I chose C because I have a test tomorrow where I have to do things in C. I don't like C++ and I don't have the option of using Rust.
- I chose SCons as my build system because it's easy and Python is allowed. I'm not using CMake.
