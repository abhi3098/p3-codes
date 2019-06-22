#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long f=1;
    int i,n;
    double x, t, sum=0.0;
    cin>>x;
    cin>>n;
    x=3.14*x/180;
    sum=x;
    t=x;
    for(i=2;i<=n;i++)
    {
        t=(-1*t*x*x)/((2*i-1)*(2*i-2));
        sum+=t;
    }
    cout<<sum;
    return 0;
}
