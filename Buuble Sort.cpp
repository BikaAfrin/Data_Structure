#include<bits/stdc++.h>
using namespace std;
void Swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
         for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                Swap(&arr[i],&arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,3,6,2,4,8,1,9};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,size_arr);
}
