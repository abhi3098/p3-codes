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
            temp++;
            }
            else
            {
                cout<<temp<<" ";
                temp--;
            }
        }
        cout<<endl;
        if(i%2==0)
            temp+=i+1;
        else
            temp+=i;
    }
    return 0;
}
