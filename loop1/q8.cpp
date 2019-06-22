#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int i,l,c=0;
    l=sqrt(n);
    for(i=2;i<=l;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    return c;
}
int main()
{
    int i,l,n,n1,n2,c1,c2,c=0;
    cin>>n;
    l=sqrt(n);
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            n1=i;
            n2=n/i;
            c1=prime(n1);
            c2=prime(n2);
            if(c1==0&&c2==0)
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
        cout<<"Semi Prime";
    else
        cout<<"Not semi prime";
    return 0;
}
