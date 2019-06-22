#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n],c=1,j,c1=0,nu;
    for(i=0;i<n;i++)
        cin>>a[i];
    nu=a[0];
    for(i=0;i<n-1;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c1<c)
        {
            c1=c;
            nu=a[i];
        }
    }
    cout<<nu;
    return 0;
}
