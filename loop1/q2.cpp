#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem;
    long long sum=0;
    cin>>n;
    while(n)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<<sum;
    return 0;
}
