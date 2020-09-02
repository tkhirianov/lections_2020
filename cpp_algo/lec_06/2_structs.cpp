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
    node_t A[5];
    for(int i = 0; i < 5; i++) {
        A[i].data = i+1;
        A[i].next = A + i + 1;
    }
    A[4].next = nullptr;

    node_t *p_begin = A;
    go_through(p_begin);

    return 0;
}
