#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,space,star=1;
    cin>>n;
    space=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        for(j=1;j<=star;j++)
        {
            cout<<"*";
        }
        star+=2;
        space--;
        cout<<endl;
    }
    return 0;
}
