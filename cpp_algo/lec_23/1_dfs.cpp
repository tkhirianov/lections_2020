#include <iostream>
#include <vector>
#include "graph.hpp"

void just_dfs(const Graph_t &graph,
              vertex_t start,
              std::vector<bool> &used)
{
    used[start] = true;
    std::cout << start << ' ';
    auto neighbours_list = graph.sets_of_neighbours[start];
    for(auto neighbour: neighbours_list) {
        if (not used[neighbour])
            just_dfs(graph, neighbour, used);
    }
}


int main()
{
    Graph_t g;
    g.input();
    g.print();

    std::cout << "Enter start vertex: ";
    vertex_t start;
    std::cin >> start;
    std::vector<bool> used_vertexes;
    used_vertexes.resize(g.vertexes_number, false);
    just_dfs(g, start, used_vertexes);
    std::cout << "\n";
}
