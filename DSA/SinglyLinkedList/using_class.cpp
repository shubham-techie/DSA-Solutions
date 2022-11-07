#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head{};
    Node *one{};
    Node *two{};

    // allocating nodes in heap
    one = new Node();
    two = new Node();

    // assigning values
    one->data = 1;
    two->data = 2;

    // connecting nodes
    one->next = two;
    two->next = nullptr;

    // save address of first node to head
    head = one;

    Node *p = head;
    while (p != nullptr)
    {
        cout << p->data << "\n";
        p = p->next;
    }
    return 0;
}