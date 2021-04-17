/*
Enter no of elements in Linked list
11
Enter elements
1
2
3
4
5
6
7
8
9
10
11

The given linked list is :
11 10 9 8 7 6 5 4 3 2 1 
The middle element is 6
*/


#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     struct Node* next;
};

void to_print_Middle_Element(struct Node* head)
{
   struct Node* slow_ptr = head;
   struct Node* fast_ptr = head;
   
   if(head!=NULL)
   {
     while (fast_ptr!=NULL && fast_ptr->next!= NULL)
     {
       fast_ptr = fast_ptr->next->next;
       slow_ptr = slow_ptr->next;
     }
     cout<<"The middle element is "<<slow_ptr->data;
     
   }
}
void to_add_new_node(struct Node** head_ref , int new_data) // node added at the front
{
    struct Node* new_node = new Node; // structure 
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void to_print(struct Node* ptr)
{
    while(ptr!= NULL)
    {
      cout<<ptr->data<<" ";
      ptr = ptr->next;
    }
    cout<<"\n";
}
int main()
{
  struct Node* head = NULL;
  int num,element;
  cout<<"Enter no of elements in Linked list\n";
  cin>>num;
  cout<<"Enter elements\n";
  for (int i =0;i<num;i++)
  {
    cin>>element;
    to_add_new_node(&head,element);
  }
  cout<<"\nThe given linked list is :\n";
  to_print(head);
  to_print_Middle_Element(head);
  return 0;
}