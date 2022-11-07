#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
namespace InsertOperations
{
    void append(Node **head_ref, const int &value);
    void prepend(Node **head_ref, const int &value);
    void insertAfter(Node **head_ref, const int &prev_value, const int &new_value);
    void insertBefore(Node **head_ref, const int &next_value, const int &new_value);
}

namespace DeleteOperations
{
    void deleteNode(Node **head_ref, const int &value);
    void deleteStart(Node **head_ref);
    void deleteEnd(Node **head_ref);
    void deleteList(Node **head_ref);
}

bool isEmpty(Node *head)
{
    if (head == nullptr)
        return true;

    return false;
}

void print(Node *node)
{
    if (isEmpty(node))
    {
        cout << "\nEmpty list";
        return;
    }

    cout << "\nLinked List : ";
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }

    cout << "\n\n";
}

void search(Node *head, const int &key)
{
    while (head != nullptr)
    {
        if (head->data == key)
        {
            cout << "\nElement found";
            return;
        }
        head = head->next;
    }
    cout << "\nElement not found";
}

void sort(Node *head_ref)
{
    Node *head = head_ref;
    Node *ptr1 = head;
    Node *ptr2{};

    while (ptr1->next != nullptr)
    {
        ptr2 = ptr1->next;

        while (ptr2 != nullptr)
        {
            if (ptr1->data > ptr2->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
int main()
{
    Node *head{nullptr};
    using namespace InsertOperations;
    using namespace DeleteOperations;

    append(&head, 27);
    append(&head, 26);
    append(&head, 25);
    append(&head, 24);
    append(&head, 23);
    append(&head, 22);
    print(head);

    while (1)
    {
        int choice{}, element{};
        int presentValue{};

        cout << "\n1.Append \n2.Prepend \n3.Insert after node \n4.Insert before node \n5.Delete node \n6.Delete start \n7.Delete End \n8.Delete List \n9.Search Node \n10.Sort list \n15.Exit";
        cout << "\nEnter your choice : ";
        cin >> choice;

        if (choice == 15)
            return 0;

        cout << "Enter element : ";
        cin >> element;

        switch (choice)
        {
        case 1:
            append(&head, element);
            break;
        case 2:
            prepend(&head, element);
            break;
        case 3:
            cout << "Enter the node value : ";
            cin >> presentValue;

            if (!isEmpty(head))
                insertAfter(&head, presentValue, element);
            else
                cout << "\nEmpty List.So, no such element";
            break;
        case 4:
            cout << "Enter the node value : ";
            cin >> presentValue;

            if (!isEmpty(head))
                insertBefore(&head, presentValue, element);
            else
                cout << "\nEmpty List.So, no such element";
            break;
        case 5:
            if (!isEmpty(head))
                deleteNode(&head, element);
            else
                cout << "\nEmpty List";
            break;
        case 6:
            if (!isEmpty(head))
                deleteStart(&head);
            else
                cout << "\nEmpty List";
        case 7:
            if (!isEmpty(head))
                deleteEnd(&head);
            else
                cout << "\nEmpty List";
            break;
        case 8:
            if (!isEmpty(head))
                deleteList(&head);
            else
                cout << "\nEmpty List";
            break;
        case 9:
            if (!isEmpty(head))
                search(head, element);
            else
                cout << "\nEmpty List";
            break;
        case 10:
            if (!isEmpty(head))
                sort(head);
            else
                cout << "\nEmpty List";
            break;
        default:
            cout << "Invalid data";
            break;
        }

        print(head);
    }

    return 0;
}

namespace InsertOperations
{
    // inserting at end
    void append(Node **head_ref, const int &value)
    {
        Node *new_node = new Node(); // allocate node
        Node *head = *head_ref;

        // putting values for new node
        new_node->data = value;
        new_node->next = nullptr;

        // if list is empty
        if (isEmpty(*head_ref))
        {
            *head_ref = new_node;
            return;
        }

        // else traversing till last node
        while (head->next != nullptr)
            head = head->next;

        head->next = new_node;
        return;
    }

    // inserting at beginning
    void prepend(Node **head_ref, const int &value)
    {
        Node *new_node = new Node();

        new_node->data = value;
        new_node->next = (*head_ref);

        (*head_ref) = new_node;
    }

    // inserting after a given node
    void insertAfter(Node **head_ref, const int &prev_value, const int &new_value)
    {
        Node *node = new Node();
        Node *head = *head_ref;
        Node *prev_node = head;
        Node *next_node = head->next;

        node->data = new_value;

        while (prev_node->data != prev_value && next_node != nullptr)
        {
            prev_node = next_node;
            next_node = next_node->next;
        }

        if (prev_node->data == prev_value)
        {
            prev_node->next = node;
            node->next = next_node;
        }
        else
            cout << "\nNo such element. " << prev_value;
    }

    // inserting before a given node
    void insertBefore(Node **head_ref, const int &next_value, const int &new_value)
    {
        Node *node = new Node();
        Node *head = *head_ref;
        Node *prev_node = head;
        Node *next_node = head;

        node->data = new_value;

        // if new value is to inserted before first element
        if (head->data == next_value)
        {
            prepend(&head, new_value);
            *head_ref = head;
            return;
        }
        else if (head->next == nullptr)
        {
            cout << "No such element.";
            return;
        }

        // checking from 2nd element
        while (next_node != nullptr && next_node->data != next_value)
        {
            prev_node = next_node;
            next_node = next_node->next;
        }

        if (next_node != nullptr && next_node->data == next_value)
        {
            prev_node->next = node;
            node->next = next_node;
        }
        else
            cout << "No such element.";
    }
}

namespace DeleteOperations
{
    void deleteStart(Node **head_ref)
    {
        Node *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        free(temp);
    }

    void deleteEnd(Node **head_ref)
    {
        Node *head = *head_ref;
        Node *prev_node{};

        if (head->next == nullptr)
        {
            deleteStart(&(*head_ref));
            return;
        }

        while (head->next != nullptr)
        {
            prev_node = head;
            head = head->next;
        }

        prev_node->next = nullptr;
        free(head);
    }

    void deleteNode(Node **head_ref, const int &value)
    {
        Node *head = *head_ref;
        Node *prev_node = head;
        Node *next_node = head;

        // if new value is to deleted is first element
        if (head->data == value)
        {
            deleteStart(&(*head_ref));
            return;
        }

        while (next_node != nullptr && next_node->data != value)
        {
            prev_node = next_node;
            next_node = next_node->next;
        }

        if (next_node == nullptr)
        {
            cout << "No such element";
            return;
        }

        prev_node->next = next_node->next;
        free(next_node);
    }

    void deleteList(Node **head_ref)
    {
        Node *head = *head_ref;

        while (head != nullptr)
            deleteStart(&head);
        *head_ref = head;
    }

}