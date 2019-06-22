#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=INT_MIN,c1=1,i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        c1=1;
        for(j=1;j<m;j++)
        {
            if(a[i][j]==1)
            {
                if(a[i][j-1]==1)
                    c1++;
            }
            else
            {
                    if(c<c1){
            c=c1;
            c1=1;
        }
            }
        }
        if(c<c1){
            c=c1;
        }
    }
    cout<<c;
    return 0;
}
