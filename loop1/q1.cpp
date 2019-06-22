#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    int i;
    long long mul=1;
    for(i=n;i>=2;i--)
        mul*=i;
    return mul;
}
int main()
{
    int n,rem;
    long long sum=0;
    cin>>n;
    while(n)
    {
        rem=n%10;
        sum+=fact(rem);
        n/=10;
    }
    cout<<sum;
    return 0;
}
