//cout<<binary_search(v.begin(),v.end(),value);

#include<bits/stdc++.h>
using namespace std;
void BinarySearch(int arr[],int n,int item)
{
    int left=0;  int right=n-1;
    for(int i=0;i<n;i++)
    {
        int mid=(right+left)/2;
        if(arr[mid]==item)
        {
            cout<<"Found   position - "<<mid;
            break;
        }
        else if(arr[mid]<item)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
}
int main()
{
    int item;
    int arr[]={4,8,5,2,7,3,10,6};
    cin>>item;
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size_arr);
    BinarySearch(arr,size_arr,item);
}
