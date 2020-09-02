#include <iostream>

struct node_t {
    int data;
    node_t *next;
};

void go_through(node_t *p)
{
    while (p != nullptr) {
        std::cout << p->data << '\n';
        p = p->next;
    }
}


int main()
{
    node_t *p_begin = new node_t;

    node_t *p = p_begin;
    for(int i = 0; i < 5; i++) {
        p->data = i+1;
        p->next = new node_t;
        p = p->next;
    }
    p->data = 777;
    p->next = nullptr;

    go_through(p_begin);

    return 0;
}
