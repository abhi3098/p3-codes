#include<bits/stdc++.h>
using namespace std;
int mul(int a,int b)
{
    if(b==1)
        return a;
    return a+mul(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<mul(a,b);
    else
        cout<<mul(b,a);
    return 0;
}
