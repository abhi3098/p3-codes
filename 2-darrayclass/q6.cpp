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
        r=0;
    else
        r=k-n+1;
    if(k<m)
        c=k;
    else
        c=m-1;
    while(r<n&&c>=0)
    {
        cout<<a[r][c]<<" ";
        r++;
        c--;
    }
    return 0;
}
