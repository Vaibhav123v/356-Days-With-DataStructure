// Constraint:
// m*n = odd
// median = middle index after sorting
// matrix is row wise sorted
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void median(int array[],int m,int n)
{
    int x = ((n-m)/2);
    cout<<array[x];
    
    

}
int main()
{
   int x[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; // we are taking sorted matrix;
   int arr[15];
   int count=0;
   for(int i=0;i<5;i++)
   {
     for(int j=0;j<3;j++)
     {
         arr[count] = x[i][j];
         count+=1;
     }
   }
   quickSort(arr,0,14);
   /*for(int i = 0; i<15;i++)
   {
       cout<<arr[i]<<" ";
   }*/
   median(arr,0,14);
   return 0;
}