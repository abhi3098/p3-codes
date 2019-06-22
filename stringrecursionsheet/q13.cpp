#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int s,int n)
{
    int t;
    if(s>n/2)
        return ;
    t=a[s];
    a[s]=a[n-1-s];
    a[n-1-s]=t;
    return rev(a,++s,n);
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    rev(a,0,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
