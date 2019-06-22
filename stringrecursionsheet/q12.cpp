#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int s,int n)
{
    static int su=0;
    if(s==n)
        return su;
    su+=a[s];
    return sum(a,++s,n);
}
int main()
{
    int m,n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    m=sum(a,0,n);
    cout<<m;
    return 0;
}
