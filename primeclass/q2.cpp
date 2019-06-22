#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lim,temp;
    cin>>n;
    lim=sqrt(n);
    for(i=1;i<=lim;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    temp=i-1;
    for(i=lim;i>=1;i--)
    {
        if(n%i==0)
        {
            if(temp!=n/i)
                cout<<n/i<<" ";
        }
    }
    return 0;
}
