#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,lim;
    cin>>n;
    lim=sqrt(n);
    for(i=2;i<=lim;i++)
    {
        c=0;
        while(n%i==0)
        {
            n/=i;
            c=1;
        }
        if(c==1)
        cout<<i<<endl;
    }
    return 0;
}
