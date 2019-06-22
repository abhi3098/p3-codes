#include<bits/stdc++.h>
using namespace std;
int rw(int,int);
int f(int m,int p,int w)
{
    int nc=m/p;
    return nc+rw(nc,w);
}
int rw(int nc,int w)
{
    if(nc<w)
        return 0;
    int nn=nc/w;
    return nn+rw(nn+nc%w,w);
}
int main()
{
    int m=20,p=4,w=3;
    cout<<f(m,p,w);
    return 0;
}
