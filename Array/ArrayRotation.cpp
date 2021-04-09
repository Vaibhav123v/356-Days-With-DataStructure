// Program for array rotation in c++
// We have an array of size n and we have to rotate that array by x elements
// for example array = {10,20,30,40,50,60,70}
// We have to rotate by 2.
// C++ program to rotate an array by d elements
// let us  rotate this array by 2.
// New Array will be {30,40,50,60,70,10,20} 
// Approach--->We can use rotate one by one 

#include<iostream>
using namespace std;

void first_rotation(int array[],int size)
{
    int temp = array[0];
    for(int i = 0;i<size-1;i++)
    {
        array[i] = array[i+1];
    }
    array[size-1] = temp;
}
void rotations_required(int array[],int size,int d)
{
    for(int i = 0;i<d;i++)
   {
    first_rotation(array,size);
   }
}
int main()
{
    int array[] = {10,20,30,40,50,60,70}; // we can take array elements from users through "cin" operator
    int size = 7;// size of an array
    int d = 2;// 
    rotations_required(array,size,d);
    cout<<"Array after rotation by "<<d<<"elements is"<<endl;
    for(int i = 0;i<size;i++)
    {
       cout<<array[i]<<" ";
    }

return 0;
}