#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,j=-1;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z'&&s[i]!='e')
        {
            c=1;
            break;
        }
        if(s[i]=='.')
        {
            if(j==-1)
                j=i;
            else
            {
                c=1;
                break;
            }
        }
        if(s[i]=='e'&&i<j)
        {
            c=1;
            break;
        }
    }
    if(c==0&&j>=0)
        cout<<"Valid";
    else
        cout<<"Not Valid";
}
