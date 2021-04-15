/*
Apple
Mango 
Banana 
Kiwi
Grapes
Orange
Original Linked List is 
Apple Mango Banana Kiwi Grapes Orange 
Enter the Node to be deleted using above keys Kiwi
Linked List after deleting Kiwi is
Apple Mango Banana Grapes Orange 
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string item;
    Node* next;
};
void add(Node** head_ref,string data)
{
     Node *new_node = new Node();
     Node *last = *head_ref;
     new_node->item = data;
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
void deletion_of_node(Node** head_ref,string key)
{
  Node* temp = *head_ref;
  Node* previous = NULL;
  if(temp!=NULL && temp->item==key)
  {
      *head_ref = temp->next;
      delete temp;
      return;
  }
  else{
      while(temp!=NULL && temp->item!=key)
      {
        previous = temp;
        temp  = temp->next;
      }
      if(temp==NULL)
      {
          return;
      }
      previous->next = temp->next;
      delete temp;
  }
}
void print(Node *node)
{
    while(node!=NULL)
    {
      cout<< node->item<<" ";
      node = node->next;
    }
}
int main()
{
    Node* head = NULL;
    string a;
    string key;
    for(int i = 0;i< 6 ; i++)
    {   
        cin>>a;
        add(&head,a);
    }
    cout<<"Original Linked List is "<<endl;
    print(head);
    cout<<"\nEnter the Node to be deleted using above keys ";
    cin>>key;
    deletion_of_node(&head,key);
    cout<<"Linked List after deleting" <<key<<" is "<<endl;
    print(head);
    return 0;
}