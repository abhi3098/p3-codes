#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int i,n,s;
    cin>>n;
    s=fact(n);
    cout<<s;
    return 0;
}
