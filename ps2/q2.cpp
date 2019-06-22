#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,space=0,ispace=0;
    cin>>row>>col;
    for(i=0;i<col;i++)
        cout<<"*";
    cout<<endl;
    space++;
    ispace=col-2;
    for(i=1;i<=row-2;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        cout<<"*";
        space++;
        for(j=1;j<=ispace;j++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    for(i=0;i<space;i++)
        cout<<" ";
    for(i=0;i<col;i++)
        cout<<"*";
    return 0;
}
