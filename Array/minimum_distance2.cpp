// Tricky Method to solve this problem in O(n) time.
#include<bits/stdc++.h>
using namespace std;
int minDist(int array[],int n , int x ,int y)
{
  int i,prev;
  int min_dist = INT_MAX;
  for(i=0;i<n;i++)
  {
    if(array[i]==x || array[i]==y)
    {
      prev = i;
      break;
    }
  }
  for(;i<n;i++)
  {
    if(array[i]==x || array[i]==y)
    {
      if(array[prev]!=array[i] &&  (i-prev) < min_dist)
      {
        min_dist = i - prev;
        prev = i;
      }
      else
      {
        prev = i;
      }
    }
  }
  return min_dist;
}
int main()
{
  int array[]={3,5,4,2,6,3,5,0,0,5,4,6,3};
  int n = sizeof(array)/sizeof(array[0]);
  int x = 3,y =6; // We can take input from the user......................
  cout<<minDist(array,n,x,y);
  return 0;
}