#include <iostream>
#include <vector>
#include "graph.hpp"

bool check_DAG(const OrGraph_t &graph,
              vertex_t start,
              std::vector<bool> &used)
{
    used[start] = true;
    auto neighbours_list = graph.sets_of_neighbours[start];
    for(auto neighbour: neighbours_list) {
        if (neighbour == start) {
            continue;
        }
        if (used[neighbour]) // Пытаемся попасть в соседнюю ранее пройденную вершину. Цикл!
           return false; 
        bool is_DAG = check_DAG(graph, neighbour, used);
        if (not is_DAG) return false;
    }
    return true; // Достигаю этой точки, только если не случилось return false.
}


int main()
{
    OrGraph_t g;
    g.input();
    g.print();

    std::vector<bool> used_vertexes;
    used_vertexes.resize(g.vertexes_number, false);
    bool is_DAG = true;
    for (vertex_t v = 0; v < g.vertexes_number; v++) {
        if (used_vertexes[v]) continue;
        if (not check_DAG(g, v, used_vertexes)) {
            is_DAG = false;
            break;
        }
    }
    if (is_DAG)
        std::cout << "Acyclic graph.\n";
    else
        std::cout << "Cyclic graph.\n";
}
