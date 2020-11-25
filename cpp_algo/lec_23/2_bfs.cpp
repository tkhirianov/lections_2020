#include <iostream>
#include <vector>
#include <deque>
#include "graph.hpp"

void just_bfs(const Graph_t &graph,
              vertex_t start,
              std::vector<bool> &fired)
{
    fired[start] = true;
    std::deque<vertex_t> firing_list;
    firing_list.push_back(start);

    std::cout << start << '\t';
    while (not firing_list.empty()) {
        vertex_t current = firing_list.front();
        firing_list.pop_front();

        auto neighbours_list = graph.sets_of_neighbours[current];
        for(auto neighbour: neighbours_list) {
            if (not (fired[neighbour])) {
                std::cout << neighbour << "\t";
                fired[neighbour] = true;
                firing_list.push_back(neighbour);
            }
        }
    }
    std::cout << '\n';
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
    just_bfs(g, start, used_vertexes);
    std::cout << "\n";
}
