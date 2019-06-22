#include<bits/stdc++.h>
using namespace std;
int b2d(char *c,int l,int exp)
{
    /*if(l<0)
        return 0;
    return (c[l]-'0')*pow(2,exp)+b2d(c,l-1,exp+1);*/
    if(exp==l)
        return c[l]-'0';
    return (c[exp]-'0')*pow(2,(l-exp))+b2d (c,l,exp+1);
}
int main()
{
    char c[]="10010";
    cout<<b2d(c,strlen(c)-1,0);
    return 0;
}
