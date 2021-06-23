// Array Rotation using Temp array by d elements
#include<iostream>
using namespace std;
void func(int arr[],int d,int n)
{ 
    int temp[d];
    for(int i = 0 ; i<d ; i++)
    {
        temp[i] = arr[i];
    }
    for(int i = 0 ;i<n;i++)
    {
        arr[i]=arr[i+d];
    }
    int x = 0;
    for(int i = n-d ; i<n ; i++)
    {
       arr[i] = temp[x];
       x+=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int array[] = {10,20,30,40,50,60,70};
    int n = 7;
    int d = 6;
    func(array,d,n);
    return 0;
}