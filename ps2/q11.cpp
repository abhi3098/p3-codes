#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,f=1,n,ans,c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=j*f;
        c++;
        j++;
        if(c==2)
        {
            c=0;
            f+=3;
        }
        else
            f++;
    }
    cout<<ans;
    return 0;
}
