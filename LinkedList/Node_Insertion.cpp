// we can insert node after any given node(also at the  front of linked list or at the end.)
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
};
// I will be using three functions to demonstrate all the insertion ways.Like at the end,at the front or after any given node
void node_at_front(Node **head_ref, string new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void node_after_node(Node *previous_node, string new_data)
{
    if (previous_node == NULL)
    {
        cout << "Previous node is empty so no further operation";
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = previous_node->next;
    previous_node->next = new_node;
}
void node_at_end(Node **head_ref, string new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data<<endl;
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    string a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        node_at_end(&head, a);
    }
    printList(head);
    node_at_front(&head,"Front");
    node_after_node(head->next,"Random");
    printList(head);
    return 0;
}