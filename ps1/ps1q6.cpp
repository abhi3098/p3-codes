#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
            cout<<temp<<" ";
            }
            else
            {
                cout<<"-"<<temp<<" ";
            }
            temp++;
        }
        cout<<endl;
    }
    return 0;
}
