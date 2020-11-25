#ifndef _GRAPH_HPP__
#define _GRAPH_HPP__

#include <iostream>
#include <map>
#include <set>
#include <vector>

typedef int32_t vertex_t;
typedef std::set<vertex_t> SetOfVertexes;


class Graph_t
{
public:
    int vertexes_number = 0;
    int edges_number = 0;
    // списки смежности для каждой вершины графа:
    std::vector<std::set<vertex_t>> sets_of_neighbours;

    void input()
    {
        std::cin >> vertexes_number;
        std::cin >> edges_number;
        // полная очистка массива списков смежности
        sets_of_neighbours.clear();
        // создаю пустые списки смежности для каждой вершины:
        sets_of_neighbours.resize(vertexes_number);
        for (int i = 0; i < edges_number; i++) {
            vertex_t a, b;
            std::cin >> a >> b;
            sets_of_neighbours[a].insert(b); // у вершины a - сосед b
            sets_of_neighbours[b].insert(a); // у вершины a - сосед b
        }
    }

    void print() const
    {
        std::cout << "Vertexes number = "
                  << vertexes_number << std::endl;
        for(vertex_t vertex = 0; vertex < vertexes_number; vertex++) {
            std::cout << vertex << ": [";
            for(auto neighbour: sets_of_neighbours[vertex]) {
                std::cout << neighbour << ", ";
            }
            std::cout << "\b\b]\n";
        }
        std::cout << std::endl;
    }
};

#endif //_GRAPH_HPP__
