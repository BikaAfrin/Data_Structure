#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel(c) bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define MAX 1000000
#define ll long long
int fibonacchi(int n)
{
    if(n==0){return 0; }
    if(n==1){return 1; }
    return (fibonacchi(n-1)+fibonacchi(n-2));
}
int main()
{
    int n=5;
    int l=fibonacchi(n);
    cout<<l<<"\n";
}

