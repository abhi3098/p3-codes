#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,i;
    cin>>n;
    cin>>a>>b>>c;
    long long sum;
    sum=a+b+c;
    if(n==3)
    {
        cout<<a<<b<<c<<endl;
        cout<<sum;
    }
    else
    {
        cout<<a<<b<<c;
        for(i=4;i<=n;i++)
        {
            c+=1;
            sum+=c;
            cout<<c;

        }
        cout<<sum;
    }
    return 0;
}
