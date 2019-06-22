#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,j,n,space,star=1;
    cin>>n;
    l=n/2+1;
    space=l-1;
    for(i=1;i<=l;i++)
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
    space+=2;
    star-=4;
    for(i=l+1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        for(j=1;j<=star;j++)
            cout<<"*";
        cout<<endl;
        space++;
        star-=2;
    }
    return 0;
}
