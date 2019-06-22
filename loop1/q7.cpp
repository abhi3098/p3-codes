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
    int i,n1,n2,c1,c2,d;
    cin>>n1>>n2;
    c1=prime(n1);
    c2=prime(n2);
    if(c1==1||c2==1)
    {
        cout<<"not twin prime";
    }
    else
    {
        if(abs(n1-n2)==2)
            cout<<"twin prime";
        else
            cout<<"not twin prime";
    }
    return 0;
}
