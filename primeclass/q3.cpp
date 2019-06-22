#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,lim;
    cin>>n;
    lim=sqrt(n);
    for(i=2;i<=lim;i++)
    {
        c=0;
        while(n%i==0)
        {
            c++;
            n/=i;
        }
        if(c)
            cout<<i<<"^"<<c<<endl;
    }
    return 0;
}
