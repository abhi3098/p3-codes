#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=1,b=1;
    int i,n;
    cin>>n;
    if(n==1||n==2)
        cout<<"1";
    else
    {
        for(i=3;i<=n;i++)
        {
            if(i%2==0)
                b*=3;
            else
                a*=2;
        }
    }
    if(n%2==0)
        cout<<b;
    else
        cout<<a;
    return 0;
}
