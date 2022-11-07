/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
    }

    Node(const int &value)
    {
        data = value;
    }
};

Node *head = nullptr;

void insert(const int &data)
{
    Node *newnode = new Node(data);
    Node *ptr = head;

    if (head == nullptr)
    {
        newnode->next = newnode;
        head = newnode;
        return;
    }

    while (ptr->next != head)
        ptr = ptr->next;

    ptr->next = newnode;
    newnode->next = head;
}

void print()
{
    Node *ptr = head;

    if (ptr == nullptr)
    {
        printf("\nEmpty list");
        return;
    }

    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    print();
    return 0;
}
*/

#include <iostream>
#define endl "\n"
using namespace std;

// constant reference integer
using cri = const int &;

// Node declaration
struct node
{
    int data;
    struct node *next;
} * last;

// class declaration
class Circular_llist
{
public:
    void create_node(cri value);
    void add_begin(cri value);
    void add_after(cri value, cri position);
    void delete_element(cri value);
    void search_element(cri value);
    void update(cri value, cri position);
    void sort();
    void display_list();

    Circular_llist()
    {
        last = nullptr;
    }
};

int main()
{
    int choice{}, element{}, pos{};
    Circular_llist c1;

    while (1)
    {
        cout << endl
             << "--------------------------";
        cout << endl
             << "Circular Singly Linked List";
        cout << endl
             << "--------------------------";

        cout << endl
             << "1.Create Node";
        cout << endl
             << "2.Add at beginning";
        cout << endl
             << "3.Add after Node";
        cout << endl
             << "4.Delete Node";
        cout << endl
             << "5.Search element";
        cout << endl
             << "6.Update node";
        cout << endl
             << "7.Sort list";
        cout << endl
             << "8.Display list";
        cout << endl
             << "9.Clear the screen";
        cout << endl
             << "0.Exit";

        cout << endl
             << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter the element : ";
            cin >> element;

            c1.create_node(element);
            break;

        case 2:
            cout << endl
                 << "Enter the element : ";
            cin >> element;

            c1.add_begin(element);
            break;

        case 3:
            cout << endl
                 << "Enter the element : ";
            cin >> element;

            cout << endl
                 << "Insert element after position : ";
            cin >> pos;

            c1.add_after(element, pos);
            break;

        case 4:
            if (last == nullptr)
            {
                cout << endl
                     << "Empty list,nothing to delete";
                break;
            }
            cout << endl
                 << "Enter element for deletion : ";
            cin >> element;

            c1.delete_element(element);
            break;

        case 5:
            if (last == nullptr)
            {
                cout << endl
                     << "Empty list,nothing to search";
                break;
            }
            cout << endl
                 << "Enter element to search : ";
            cin >> element;

            c1.search_element(element);
            break;

        case 6:
            if (last == nullptr)
            {
                cout << endl
                     << "Empty list,nothing to update";
                break;
            }
            cout << endl
                 << "Enter node position to update : ";
            cin >> pos;

            cout << endl
                 << "Enter new element value : ";
            cin >> element;

            c1.update(element, pos);
            break;

        case 7:
            if (last == nullptr)
            {
                cout << endl
                     << "Empty list,nothing to sort";
                break;
            }

            c1.sort();
            break;

        case 8:
            c1.display_list();
            break;

        case 9:
            system("cls");
            break;

        case 0:
            exit(1);
            break;

        default:
            cout << endl
                 << "Wrong choice/input.";
        }
    }
    return 0;
}

// 1.function to create linked list
void Circular_llist::create_node(cri value)
{
    node *new_node = new node();
    new_node->data = value;

    if (last == nullptr)
    {
        last = new_node;
        new_node->next = new_node;
    }
    else
    {
        new_node->next = last->next;
        last->next = new_node;
        last = new_node;
    }
}

// 2.function to add node at the beginning
void Circular_llist::add_begin(cri value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;

    if (last == nullptr)
    {
        last = new_node;
        new_node->next = new_node;
        return;
    }

    new_node->next = last->next;
    last->next = new_node;
}

// 3.function to insert node after specific position
void Circular_llist::add_after(cri value, cri position)
{
    node *new_node = new node();
    new_node->data = value;

    // if pos less than 1
    if (position < 1)
    {
        cout << endl
             << "Not a valid position";
        return;
    }

    // if empty list
    if (last == nullptr)
    {
        cout << endl
             << "First create list";
        return;
    }

    node *ptr = last->next; // making ptr to point 1st element

    // looping till the position of element
    for (int i = 1; i < position; ++i)
    {
        ptr = ptr->next;

        // if pos> no_elements, then ptr will point to first node
        if (ptr == last->next)
        {
            cout << endl
                 << "List has only " << i << " elements";
            return;
        }
    }

    new_node->next = ptr->next;
    ptr->next = new_node;

    // if element to be inserted after last element
    if (ptr == last)
        last = new_node;
}

// 4.function to delete node
void Circular_llist::delete_element(cri element)
{
    node *ptr = last->next; // pointing to 1st element
    node *temp{};           // ptr to store deletable node

    // if list has only one element
    if (ptr == last && last->data == element)
    {
        temp = last;
        last = nullptr;
        free(temp);
        cout << endl
             << "Element deleted";
        return;
    }

    // if no_element>1 and 1st element is to be deleted
    if (ptr->data == element)
    {
        temp = ptr;
        last->next = ptr->next;
        free(temp);
        cout << endl
             << "Element deleted";
        return;
    }

    // iterating from 2nd element to 2nd last element
    while (ptr->next != last) // prev_ptr
    {
        temp = ptr->next; // next_ptr which will store element to be deleted
        if (temp->data == element)
        {
            ptr->next = temp->next;
            free(temp);
            cout << endl
                 << "Element deleted";
            return;
        }
        ptr = ptr->next;
    }

    // checking for last element
    temp = ptr->next; // last node
    if (temp->data == element)
    {
        ptr->next = last->next;
        free(temp);
        last = ptr;
        cout << endl
             << "Element deleted";
        return;
    }

    cout << endl
         << "Element " << element << " not found in the list";
}

// 5.function to search node
void Circular_llist::search_element(cri element)
{
    node *ptr = last->next;
    int counter{};

    while (ptr != last)
    {
        ++counter;

        if (ptr->data == element)
        {
            cout << endl
                 << "Element found at position " << counter;
            return;
        }
        ptr = ptr->next;
    }

    // checking for last node
    if (ptr->data == element)
    {
        ++counter;
        cout << endl
             << "Element found at position " << counter;
        return;
    }

    // if not found
    cout << endl
         << "Element " << element << " not found in list";
}

// 6.function to update node
void Circular_llist::update(cri value, cri position)
{
    node *ptr = last->next;

    if (position < 1)
    {
        cout << endl
             << "Not a valid position";
        return;
    }

    for (int i{1}; i < position; ++i)
    {
        // if ptr reaches last element
        if (ptr == last)
        {
            cout << endl
                 << "There are only " << i << " elements";
            return;
        }
        ptr = ptr->next;
    }

    ptr->data = value;
    cout << endl
         << "Node updated";
}

// 7.function to sort list
void Circular_llist::sort()
{
    node *ptr1 = last->next; // ptr to 1st element

    while (ptr1 != last)
    {
        node *ptr2 = ptr1->next;

        while (ptr2 != last->next)
        {
            if (ptr1->data > ptr2->data)
                swap(ptr1->data, ptr2->data);

            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }

    cout << endl
         << "List sorted";
}

// 8.function to print linked list
void Circular_llist::display_list()
{
    node *ptr;

    if (last == nullptr)
    {
        cout << endl
             << "Empty list";
        return;
    }

    // ptr = last->next; // making ptr to point 1st element

    cout << endl
         << "Linked List : ";

    for (ptr = last->next; ptr != last; ptr = ptr->next)
        cout << ptr->data << " ";

    // while (ptr != last)
    // {
    //     cout << ptr->data << " ";
    //     ptr = ptr->next;
    // }

    cout << ptr->data;
}