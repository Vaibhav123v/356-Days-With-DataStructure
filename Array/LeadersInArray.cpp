// Finding the leaders in array
// Elements which are greater then all the right elements next to it.
// Complexity O(n**2)
#include<iostream>
using namespace std;
int main()
{
  int array []= {1,10,11,9,8,7,6,5};
  int n = 8;
  for(int i= 0 ; i <n ;i++)
  { 
    int count = 0;
    for(int j = i+1;j<n;j++)  
    {
       if (array[i]>array[j])
       {
         count+=1;
       }
       else
       {
         break;
       }
    }
    if(count==n-i-1)
    {
      cout<<array[i]<< ",";
    }

    }
return 0;
}