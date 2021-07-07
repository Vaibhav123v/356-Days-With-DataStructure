#include<bits/stdc++.h>
using namespace std;
struct Queue{
    stack<char>s1,s2;
    void enqueue(char x)
    {
     // move all elements from stack 1 to stack2
     while (!s1.empty())
     {
         s2.push(s1.top());
         s1.pop();
     }
     // push item into s1
     s1.push(x);

     while(!s2.empty())
     {
         s1.push(s2.top());
         s2.pop();
     }
    }
    char dequeue()
    {
       if(s1.empty())
       {
           cout<<"Queue is Empty";
           exit(0);
       }
       else
       {
           char x = s1.top();
           s1.pop();
           return x;
       }
    }
};
/*
    Q.enqueue('M');
    Q.enqueue('0');
    Q.enqueue('D');
    Q.enqueue('I');
    Q.enqueue('N');
    Q.enqueue('A');
    Q.enqueue('G');
    Q.enqueue('A');
    Q.enqueue('R');
*/
int main()
{
    struct Queue Q;
    char x;
    for(int i = 1;i<10;i++)
    {
      cin>>x;
      Q.enqueue(x);
    }
    for(int i = 1;i<10;i++)
    {
        cout<<Q.dequeue();
    }
    return 0;
}