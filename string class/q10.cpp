#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,n,cnt[26]={0},c;
    string s;
    cin>>s;
    n=s.length();
    char sub[n+1];
    for(i=0;i<n;i++)
    {
        c=0;
        memset(cnt,0,sizeof(cnt));
        for(j=i;j<n;j++)
        {
            if(cnt[s[j]-'a']==0)
            {
                sub[c]=s[j];
                c++;
                sub[c]='\0';
                cout<<sub<<endl;
                cnt[s[j]-'a']++;
            }
            else
                break;
        }
    }
    return 0;
}
