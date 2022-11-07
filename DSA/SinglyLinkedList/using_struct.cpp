#include <iostream>
using namespace std;

// using structure
struct node
{
    int data;
    struct node *next;
};

// typedef struct node Node;

int main()
{
    // initializing nodes
    node *head{nullptr};
    node *one{};
    node *two{};

    // allocating heap memory
    one = (node *)malloc(sizeof(node));
    two = (node *)malloc(sizeof(node));

    // assigning values
    one->data = 1;
    two->data = 2;

    // connecting nodes
    one->next = two;
    two->next = nullptr;

    // save address of first node to head
    head = one;

    node *p = head;
    while (p != nullptr)
    {
        cout << p->data << "\n";
        p = p->next;
    }
    return 0;
}