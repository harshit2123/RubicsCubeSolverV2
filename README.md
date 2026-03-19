# Rubik’s Cube Solver (V2)

A high-performance C++ application that models a 3x3 Rubik's Cube and implements various search algorithms—culminating in **Korf’s IDA* Algorithm**—to find the most efficient solution path.

## 🚀 Features
* **Multiple Cube Representations:** Modeled the Rubik's Cube using three different data structures (Standard DSA) to optimize for memory and search speed.
* **Comprehensive Algorithm Suite:** Includes implementations of:
    * Breadth-First Search (BFS)
    * Depth-First Search (DFS)
    * Iterative Deepening Depth-First Search (IDDFS)
    * *Korf’s IDA* (Iterative Deepening A*)**
* **High Performance:** Solves a cube jumbled 8 times in **< 3 seconds** (BFS/DFS/IDDFS).
    * Solves a cube jumbled 13 times in **< 10 seconds** (IDA*).
* **Pattern Databases:** Utilizes heuristic estimates to prune search trees effectively in IDA*.



---

## 🧠 Algorithms Explained

### 1. BFS, DFS, and IDDFS
These algorithms serve as the baseline for the solver. While effective for cubes with a low number of shuffles (up to 8), they face exponential time complexity as the distance from the solved state increases.

### 2. Korf’s IDA* Algorithm
The core of this project is the implementation of Richard Korf's IDA*. This algorithm uses a heuristic function to estimate the number of moves required to reach the goal state. 
* **Heuristic:** Based on pattern databases that store the minimum moves required to solve specific sub-problems (e.g., corner pieces only).
* **Pruning:** By comparing the current depth plus the heuristic estimate against a threshold, the algorithm prunes branches that cannot lead to an optimal solution within the current limit.



---

## 🛠️ Tech Stack
* **Language:** C++
* **Concepts:** Data Structures & Algorithms (DSA), Graph Theory, Heuristic Search, Optimization.

---

## 📂 Project Structure
```text
├── src
│   ├── Models           # Cube representations (Bitboard, 1D Array, etc.)
│   ├── Solvers          # Implementation of BFS, DFS, IDDFS, and IDA*
│   └── PatternDatabases # Heuristic tables for IDA*
├── main.cpp             # Driver code to run and benchmark solvers
└── README.md
```

---

## 📈 Benchmarks

| Algorithm | Shuffles | Time Taken |
| :--- | :---: | :--- |
| BFS / IDDFS | 8 | ~2.5 Seconds |
| **IDA* (Korf)** | **13** | **~9.2 Seconds** |

---

## ⚙️ How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/harshit2123/RubicsCubeSolverV2.git
   cd RubicsCubeSolverV2
   ```

2. **Compile the project:**
   ```bash
   g++ -O3 main.cpp -o solver
   ```
   *(Note: The `-O3` flag is recommended for maximum performance during state searching.)*

3. **Run the executable:**
   ```bash
   ./solver
   ```

---

## 📄 Research & References
This project was developed as a research-oriented implementation of optimal Rubik's Cube solving techniques. 
* Korf, R. E. (1997). *Finding Optimal Solutions to Rubik's Cube Using Pattern Databases.*

---

## 👤 Author
**Harshit**
* GitHub: [@harshit2123](https://github.com/harshit2123)
