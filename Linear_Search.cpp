#include<bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[],int n,int item)
{
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            cout<<"Found   position - "<<i+1<<endl;
            count1=1;
            break;
        }
    }
    if(count1!=1)
    {
        cout<<"Not Found"<<endl;
    }
}
int main()
{
    int item;
    int arr[]={4,7,2,9,3,6,1};
    cin>>item;
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    LinearSearch(arr,size_arr,item);
}