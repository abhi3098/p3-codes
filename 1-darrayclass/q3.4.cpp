#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    i=0;
    j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
            j++;
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}
