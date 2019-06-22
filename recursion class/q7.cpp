#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==1)
        return a;
    return power(a,b/2)*power(a,b/2);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
