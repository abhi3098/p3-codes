#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,space=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<space;j++)
            cout<<" ";
        for(j=0;j<4;j++)
            cout<<"*";
        cout<<endl;
        space++;
    }
    return 0;
}
