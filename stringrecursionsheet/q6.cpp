#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
    static int f=0;
    if(n==0)
        return f;
    f=f*10+(n%10);
    return rev(n/10);

}
int main()
{
    int i,n,c;
    cin>>n;
    c=rev(n);
    cout<<c;
    return 0;
}
