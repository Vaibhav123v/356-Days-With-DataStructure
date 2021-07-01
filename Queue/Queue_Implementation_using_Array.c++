// Implementation of Queue using an Array
#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
     int rear,front,size;
     unsigned capacity;
     int* array;
};

Queue* createQueue(unsigned capacity)
{
       Queue* queue = new Queue();
       queue->capacity = capacity;
       queue->front = queue->size = 0;
       queue->rear = capacity-1;
       queue->array = new int[queue->capacity];
       return queue;

}
int is_Empty(Queue* queue)
{
   return queue->size==0; 
}
int is_full(Queue* queue)
{
   return queue->size==queue->capacity;
}
void enqueue(Queue* queue,int item)
{
   if (is_full(queue))
   {
       return;
   }
   queue->rear = (queue->rear + 1)%queue->capacity;
   queue->array[queue->rear] = item;
   queue->size +=1;
   cout<<item<< " is enqueued is Queue \n";
}
int dequeue(Queue* queue)
{
   if (is_Empty(queue))
   {
       return INT_MIN;
   }
   int item = queue->array[queue->front];
   queue->front = (queue->front + 1)% queue->capacity;
   queue->size -=1;
   return item;


}
int rear(Queue* queue)
{
if (is_Empty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
  
}
int front(Queue* queue)
{
 if (is_Empty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
int main()
{
    Queue* queue = createQueue(100);
    for(int i=10;i<20;i++)
    {
        enqueue(queue,i);
    }
    cout<<"dequeued at first" << dequeue(queue)<<endl;
    cout<<"dequeued at second" << dequeue(queue)<<endl;
    cout<< "Front element ater performing enqueue and dequeue "<< front(queue)<<endl;
    cout<<"Rear element ater performing enqueue and dequeue "<< rear(queue)<<endl;
  return 0;
}