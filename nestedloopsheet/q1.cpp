#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n;
    int a[n],j,c=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            break;
    }
    if(c==1)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
