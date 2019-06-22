#include<bits/stdc++.h>
using namespace std;
double sumlog(int n)
{
    if(n==1)
        return 0;
    return sumlog(n-1)+log(n);
}
int main()
{
    int n;
    double ans;
    cin>>n;
    ans=sumlog(n);
    cout<<ans;
    return 0;
}
