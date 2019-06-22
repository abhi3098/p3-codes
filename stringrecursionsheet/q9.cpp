#include<bits/stdc++.h>
using namespace std;
int b2d(int n)
{
    static int i=0,s=0;
    int r;
    if(n==0)
        return s;
    r=n%10;
    s=s+(r*pow(2,i));
    i++;
    return b2d(n/10);
}
int main()
{
    int n,c;
    cin>>n;
    c=b2d(n);
    cout<<c;
    return 0;
}
