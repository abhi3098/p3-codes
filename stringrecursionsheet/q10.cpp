#include<bits/stdc++.h>
using namespace std;
int d2b(int a[],int n)
{
    static int i=0;
    int r;
    if(n==0)
        return i;
    r=n%2;
    a[i]=r;
    i++;
    return d2b(a,n/2);
}
int main()
{
    int j,n,i,c;
    cin>>n;
    int a[n];
    i=d2b(a,n);
    for(j=i-1;j>=0;j--)
        cout<<a[j]<<" ";
    return 0;
}
