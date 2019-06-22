#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=2,a=2;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a*=2;
        sum+=a;
    }
    cout<<sum;
    return 0;
}
