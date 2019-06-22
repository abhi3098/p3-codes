#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int s,int l)
{
    int t;
    while(s<l)
    {
        t=a[s];
        a[s]=a[l];
        a[l]=t;
        s++;
        l--;
    }
    return ;
}
int main()
{
    int f,t,c,i,n,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i+=k)
    {
        if(i+k>n)
            rev(a,i,n-1);
        else
            rev(a,i,i+k-1);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
