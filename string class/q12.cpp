#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,n2,c[26]={0},ch=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n1=s1.length();
    n2=s2.length();
    if(n1!=n2)
        cout<<"Not anagram";
    else
    {
        for(i=0;i<n1;i++)
            c[s1[i]-'a']++;
        for(i=0;i<n2;i++)
            c[s2[i]-'a']--;
        for(i=0;i<26;i++)
        {
            if(c[i]==0)
                ch++;
        }
        if(ch==26)
            cout<<"Anagram";
        else
                cout<<"Not anagram";
    }
    return 0;
}
