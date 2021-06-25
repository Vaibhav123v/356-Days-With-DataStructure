#include<bits/stdc++.h>
using namespace std;
int minDist(int array[],int n , int x ,int y)
{
  int i,j;
  int min_dist =INT_MAX;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if((x==array[i]&& y== array[j] || y == array[i] && x == array[j] )&& min_dist > abs(i-j))
      {
        min_dist = abs(i-j);
      }

    }
  }
return min_dist;
}
int main()
{
  int array[]={3,5,4,2,6,5,6,6,5,4,8,3};
  int n = sizeof(array)/sizeof(array[0]);
  int x = 3,y =6;
  cout<<minDist(array,n,x,y);
  return 0;
}