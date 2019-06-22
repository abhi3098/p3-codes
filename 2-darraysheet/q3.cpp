#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=INT_MIN,c1=0,i,j,n,m;
    cin>>n>>m;
    int f,a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<m;i++)
    {
        c1=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
                c1++;
        }
        if(c<c1){
            c=c1;
            f=i+1;}
    }
    cout<<f;
    return 0;
}
