#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,c,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    int k;
    cin>>k;
    if(k<n)
        r=n-1-k;
    else
        r=0;
    if(k<m-1)
        c=0;
    else
        c=k-m;
    while(r<n&&c<m)
    {
        cout<<a[r][c]<<" ";
        r++;
        c++;
    }
    return 0;
}
