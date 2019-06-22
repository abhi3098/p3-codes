#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    static int s=0;
    if(n==0)
        return s;
    s=s+(n%10);
    return sum(n/10);
}
int main()
{
    int s,n;
    cin>>n;
    s=sum(n);
    cout<<s;
    return 0;
}
