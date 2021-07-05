#include<bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int v=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(v<arr[j])
            {
                Swap(&arr[i],&arr[j]);
                i--;
            }
            else
            {
                break;
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
    int arr[]={7,9,3,1,0,5,33,6};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    Insertionsort(arr,size_arr);
}
