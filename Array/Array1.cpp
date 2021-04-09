// C++-programs to find sum of elements in given array
// array = [1,2,3,4,6,7,8]
// sum = 1+2+3+4+6+7+8 = 31
#include<iostream>
using namespace std;
int sum_of_elements(int array[],int size)
{
    int sum = 0;
    for(int i = 0; i<size;i++)
    {
      sum+=array[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of an array ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of an array"<<endl;
    for(int i = 0 ;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Sum of all elements of an array is " <<sum_of_elements(array,size);
}
