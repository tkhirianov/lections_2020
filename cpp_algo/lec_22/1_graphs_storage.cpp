#include <iostream>
#include <map>
#include <set>
#include <vector>

typedef int32_t vertex_t;
typedef std::set<vertex_t> SetOfVertexes;

class AbstractGraph {
public:
    int vertexes_number = 0;
    int edges_number = 0;

    virtual void input() = 0;
    virtual void print() const = 0;
};

class Graph_type1: public AbstractGraph
{
public:
    std::set<std::pair<vertex_t, vertex_t>> set_of_edges;

    void input()
    {
        std::cin >> vertexes_number;
        std::cin >> edges_number;
        set_of_edges.clear();
        for (vertex_t i = 0; i < edges_number; i++) {
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


class Graph_type2: public AbstractGraph
{
public:
    /// Matrix of adjasency
    std::vector<std::vector<bool>> matrix;

    void input()
    {
        std::cin >> vertexes_number;
        // Как только узнал количество вершин, создаю матрицу нужного размера
        matrix.resize(vertexes_number);
        for (auto &line: matrix) {
            line.resize(vertexes_number, false);
        }

        std::cin >> edges_number;
        for (vertex_t i = 0; i < edges_number; i++) {
            vertex_t a, b;
            std::cin >> a >> b;
            matrix[a][b] = 1;
            matrix[b][a] = 1;
        }
    }

    void print() const
    {
        std::cout << "Vertexes number = "
                  << vertexes_number << std::endl;

        for(vertex_t a = 0; a < vertexes_number; a++) {
            for(vertex_t b = 0; b < vertexes_number; b++) {
                std::cout << matrix[a][b] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};



int main()
{
    Graph_type2 g1;
    g1.input();
    g1.print();
}
