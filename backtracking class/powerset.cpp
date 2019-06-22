#include<bits/stdc++.h>
using namespace std;
/*void append(char *o,char *s,int l)
{
    int l1=strlen(o);
    o[l1]=s[l];
    o[l1+1]='\0';
*/
void powerset(char *s,int p,int l,string o)
{
    if(p==l)
    {
        o[p]='\0';
        cout<<o<<endl;
        return ;
    }
    powerset(s,p+1,l,o);
    //append(o,s,p);
    /*int l1=0;
    while(o[l1]>='a'&&o[l1]<='z')
        l1++;
    o[l1]=s[p];
    o[l1+1]='\0';*/
    powerset(s,p+1,l,o+s[p]);
}
int main()
{
    char str[]="abc";
    int l=strlen(str);
    char out[10]="\0";
    powerset(str,0,l,out);
    return 0;
}
