#include<bits/stdc++.h>
using namespace std;
int mul(int a,int b)
{
    static int s=0;
    if(b==0)
        return s;
    s=s+a;
    return mul(a,--b);
}
int main()
{
    int s,a,b;
    cin>>a>>b;
    s=mul(a,b);
    cout<<s;
    return 0;
}
