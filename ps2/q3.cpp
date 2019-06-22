#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c1=1,f,c2,space=2;
    cin>>n;
    f=n;
    cout<<c1;
    c1++;
    for(j=1;j<f;j++)
    {
        cout<<"*"<<c1;
        c1++;
    }
    c2=c1*(c1-1);
    c2-=(f-1);
    for(j=1;j<=f;j++)
    {
        cout<<"*"<<c2;
        c2++;
    }
    cout<<endl;
    c2=c2-(f+1);
    --f;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        for(j=1;j<=f;j++)
        {
            if(j==1)
                cout<<c1;
            else
                cout<<"*"<<c1;
            c1++;
        }
        c2-=(f-1);
        for(j=1;j<=f;j++)
        {
            cout<<"*"<<c2;
            c2++;
        }
        cout<<endl;
        c2=c2-(f+1);
        --f;
        space+=2;
    }
    return 0;
}
