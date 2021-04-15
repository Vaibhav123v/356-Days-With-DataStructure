#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    string data;
    node* next;
};
int main()
{
     node* head  = NULL;
     node* first  = NULL;
     node* second  = NULL;
     node* third  = NULL;
     node* fourth  = NULL;
     node* fifth  = NULL;

     head = new node();
     first = new node();
     second= new node();
     third= new node();
     fourth= new node();
     fifth = new node();

     head->data = "vaibhav";
     head->next = first;
     first->data = "Ayush";
     first->next = second;
     second->data = "Akshat";
     second->next = third;
     third->data = "Bhavesh";
     third->next = fourth;
     fourth->data = "Monika";
     fourth->next = fifth;
     fifth->data = "Kashish";
     fifth->next = NULL;


     while(head!=NULL)
     {
         cout<<head->data<<" ";
         head = head->next;
     }
     return 0;
     



}