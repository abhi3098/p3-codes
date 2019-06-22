#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    for(i=1;i*i*i<=n;i++);
    cout<<i-1;
    return 0;
}
