#include<bits/stdc++.h>
using namespace std;
int ap(int a,int d,int n)
{
    if(n==0)
        return 0;
    return a+ap(a+d,d,n-1);
}
int main()
{
    int a,d,n;
    cin>>a>>d>>n;
    cout<<ap(a,d,n);
    return 0;
}
