// Code for finding the Equilibrium index of an array
// Example arr [ ] = {1,2,6,4,0,-1}
// Output = 2
#include<iostream>
using namespace std;
int func(int array[],int n)
{
  int sum[n];
  int i;
  int total = 0;
  for(i=0;i<n;i++)
  {
      sum[i]=array[i]+total;
      total+=array[i];
  }
  for (i = 1;i<n-1;i++)
  {
      int leftsum,rightsum;
      leftsum = sum[i] - array[i];
      rightsum = total - sum[i];
      if(leftsum==rightsum)
      {
        
        return i;
             
       }
  }
  return 404;

}
int main()
{   int n;
    cout<<"Enter number of elements in an array";
    cin>>n;
    int array[n];
    cout<<"Enter Elements of an array ";
    for(int i = 0; i<n;i++)
    {
      cin>>array[i];
    }
    if (n==1)
    {
        cout<<0;
    }
    else if (n==2)
    {
       cout<<"Not Possible" ;
    }
    else
    {
        cout<<func(array,n);
    }
}