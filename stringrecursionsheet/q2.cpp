#include<bits/stdc++.h>
using namespace std;
int palin(int n)
{
    static int f=0;
    if(n==0)
        return f;
    f=f*10+(n%10);
    return palin(n/10);

}
int main()
{
    int i,n,c;
    cin>>n;
    c=palin(n);
    if(c==n)
        cout<<"Palin";
    else
        cout<<"Not palin";
    return 0;
}
