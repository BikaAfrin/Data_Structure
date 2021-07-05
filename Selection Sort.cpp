#include<bits/stdc++.h>
using namespace std;
void Swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_val=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_val]>arr[j])
            {
                min_val=j;
            }
        }
        Swap(&arr[i],&arr[min_val]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={8,4,2,5,7,10,3,1};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,size_arr);
}
