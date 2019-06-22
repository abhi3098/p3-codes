#include<bits/stdc++.h>
using namespace std;
int palin(char *c,int s,int l)
{
    if(s>l)
        return 1;
    if(c[s]!=c[l])
        return 0;
    return palin(c,s+1,l-1);
}
int main()
{
    char c[]="abc";
    int a;
    a=palin(c,0,strlen(c)-1);
    if(a==0)
        cout<<"not";
    else
        cout<<"yes";
    return 0;
}
