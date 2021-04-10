/*
A B C D E F G H I  K L M N O P Q     
Given character matrix is
(INPUT) 
A B C D 
E F G H 
I K L M 
N O P Q 
Character matrix after rotation 
(OUTPUT)
E A B C 
I K F D 
N L G H 
O P Q M 
*/
// This program is very similar to that of spiral matrix
// m and n
// We have to use 4 for loops for solving this prblem
// COMPLEXITY IS O(M*N)
#include <iostream>
using namespace std;
# define R 4
# define C 4
void rotate_matrix(int m , int n , char mat[R][C])
{
    int row = 0 , col = 0;
    int prev,curr;
    while(row<m && col<n)
    {
        if(row+1==m||col+1==n)
        {
            break;
        }
        prev = mat[row+1][col];

        for(int i = col;i<n;i++)
        {   
            curr = mat[row][i]; // 1 
            mat[row][i] = prev; // 4
            prev = curr;        // 1
            // prevoious = 3 
        }
        row++;
        for(int i =row;i<m;i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
            // previous = 9
        }
        n--;
        if(row<m)
        {
            for(int i = n-1;i>=col;i--)
            {
                curr  = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
                // previous value = 7
            }
            m--;
        }
        if(col<n)
        {
            for(int  i = m-1;i>=row;i--)
            {
                curr = mat[i][col];
                mat[i][col] =  prev;
                prev = curr;
            }
        }
        col++;

    }
    cout<<"Character matrix after rotation "<<endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    char array[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            cin>>array[i][j];
        }
    }
    cout<<"Given character matrix is "<<endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    rotate_matrix(R,C,array);    
    
    
    return 0;
}
