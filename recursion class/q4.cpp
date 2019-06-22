#include<bits/stdc++.h>
using namespace std;
int prime(int n,int i)
{
    if(i*i>n)
        return 1;
    if(n%i==0)
        return 0;
    return prime(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<prime(n,2);
    return 0;
}
