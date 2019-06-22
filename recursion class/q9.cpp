#include<bits/stdc++.h>
using namespace std;
void swa(int *,int *);
void reve(int a[],int s,int n)
{
    if(s>n)
        return;
    swa(&a[s],&a[n]);
    reve(a,s+1,n-1);
}
void swa(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    reve(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
