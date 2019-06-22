#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,i=0;
    long long sum=0;
    cin>>n;
    while(n)
    {
        rem=n%10;
        sum+=(rem*(pow(2,i)));
        n/=10;
        i++;
    }
    cout<<sum;
    return 0;
}
