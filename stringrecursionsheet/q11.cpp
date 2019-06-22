#include<bits/stdc++.h>
using namespace std;
int maximum(int a[],int s,int n)
{
    static int m=INT_MIN;
    if(s==n)
        return m;
    if(m<a[s])
        m=a[s];
    return maximum(a,++s,n);
}
int main()
{
    int m,n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    m=maximum(a,0,n);
    cout<<m;
    return 0;
}
