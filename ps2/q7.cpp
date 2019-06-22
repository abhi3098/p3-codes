#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,space,cu,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cout<<i;
    cout<<endl;
    cu=n-1;
    space=cu-1;
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        cout<<cu;
        cout<<endl;
        space--;
        cu--;
        if(cu==1)
            break;
    }
    for(i=1;i<=n;i++)
        cout<<i;
    return 0;
}
