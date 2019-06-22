#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,n,m;
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
        r=k;
    else
        r=n-1;
    if(k<m)
        c=0;
    else
        c=k-m+1;
    while(r>=0&&c<m)
    {
        cout<<a[r][c]<<" ";
        r--;
        c++;
    }
    return 0;
}
