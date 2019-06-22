#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,a=2,b=10,sum=0;
    int n,i;
    cin>>n;
    if(n==1)
    {
        cout<<a<<","<<b<<endl;
        cout<<a+b;
    }
    else
    {
        l=2*n;
        sum=a+b;
        cout<<a<<","<<b;
        for(i=3;i<=l;i++)
        {
            if(i%2==0)
            {
                b*=2;
                sum+=b;
                cout<<","<<b;
            }
            else
            {
                a=a*3;
                sum+=a;
                cout<<","<<a;
            }
        }
        cout<<endl<<sum;
    }
    return 0;
}
