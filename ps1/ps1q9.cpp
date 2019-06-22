#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j,n,sspace,mspace;
    cin>>n;
    l=n/2+1;
    sspace=l-1;
    mspace=0;
    for(i=1;i<=l;i++)
    {
        if(i==1)
        {
            for(j=1;j<=sspace;j++)
                cout<<" ";
            cout<<"*"<<endl;
            sspace--;
            mspace++;
        }
        else{
        for(j=1;j<=sspace;j++)
            cout<<" ";
        cout<<"*";
        for(j=1;j<=mspace;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        mspace+=2;
        sspace--;
        cout<<endl;}
    }
    mspace-=4;
    sspace+=2;
    for(i=l+1;i<=n;i++)
    {
        if(i==n)
        {
            for(j=1;j<=sspace;j++)
                cout<<" ";
            cout<<"*"<<endl;
        }
        else
        {
            for(j=1;j<=sspace;j++)
                cout<<" ";
            cout<<"*";
            for(j=1;j<=mspace;j++)
                cout<<" ";
            cout<<"*";
        }
        mspace-=2;
        sspace++;
        cout<<endl;
    }
    return 0;
}
