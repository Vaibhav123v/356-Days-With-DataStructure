#include<bits/stdc++.h>
#define R 5
#define C 5
using namespace std;

void snake_matrix(char matrix[R][C])
{
   for(int i = 0;i<R;i++)
   {
       if(i%2==0)
       {
           for(int j = 0 ; j<C ; j++)
           {
               cout<<matrix[i][j] <<" ";
           }
       }
       else{
           for(int j = C-1;j>=0;j--)
           {
               cout<< matrix[i][j]<<" ";
           }
       }
   }
}
int main()
{
   char mat[5][5];
   cout<<"Enter  25 Elements of 5*5 matrix  "<<endl;
   for(int i =0;i<5;i++)
   {
       for(int j =0 ;j<5;j++)
       {
           cin>>mat[i][j];
       }
   }
   cout<<"Original Matrix is "<<endl;
   for(int i =0;i<5;i++)
   {
       for(int j =0 ;j<5;j++)
       {
           cout<<mat[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
   cout<<"Elements of matrix in snake form "<<endl;
   snake_matrix(mat);
   return 0;
}