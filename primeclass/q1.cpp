#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lim;
    cin>>n;
    lim=sqrt(n);
    for(i=1;i<=lim;i++)
    {
        if(n%i==0)
        {
            cout<<"("<<i<<","<<n/i<<")";
        }
    }
    return 0;
}
