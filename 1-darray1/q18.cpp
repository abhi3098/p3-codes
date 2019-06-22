#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i=0,n;
    cin>>n;
    int a[n];
    while(n>1)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    a[i]=1;
    i++;
    for(j=i-1;j>=0;j--)
        cout<<a[j]<<" ";
    return 0;
}
