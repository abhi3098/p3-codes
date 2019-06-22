#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,j=0,k=0;
    cin>>n;
    cin>>a>>b;
    int ar[n],ar1[a][b];
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n;i++)
    {
        ar1[j][k]=ar[i];
        k++;
        if(k==b)
        {
            k=0;
            j++;
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            cout<<ar1[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
