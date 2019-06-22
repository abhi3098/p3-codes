#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,c[26]={0},m=INT_MIN,j;
    string s;
    cin>>s;
    char ch;
    l=s.length();
    for(i=0;i<l;i++)
    {
        c[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(c[i]>m)
        {
            m=c[i];
            j=i;
        }
    }
    ch=j+'a';
    cout<<ch;
    return 0;
}
