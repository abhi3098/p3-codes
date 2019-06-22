#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,c;
    cin>>n;
    c=fib(n);
    cout<<c;
    return 0;
}
