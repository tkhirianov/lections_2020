#include <iostream>
#include <map>
#include <set>
#include <vector>

typedef int32_t vertex_t;
typedef std::set<vertex_t> SetOfVertexes;

class Graph_type1
{
public:
    int vertexes_number = 0;
    int edges_number = 0;
    std::set<std::pair<vertex_t, vertex_t>> set_of_edges;

    void input()
    {
        std::cin >> vertexes_number;

        std::cin >> edges_number;
        set_of_edges.clear();
        for (vertex_t i = 0; i < vertexes_number; i++) {
            vertex_t a, b;
            std::cin >> a >> b;
            set_of_edges.insert(std::make_pair(a, b));
        }
    }

    void print() const
    {
        std::cout << "Vertexes number = "
                  << vertexes_number << std::endl;
        for(auto edge: set_of_edges) {
            std::cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        std::cout << std::endl;
    }
};



int main()
{
    Graph_type1 g1;
    g1.input();
    g1.print();
}
