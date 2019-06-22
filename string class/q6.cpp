#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,n1,n2,c=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n1=s1.length();
    n2=s2.length();
    for(i=0;i<n1-1;i++)
    {
        if(s1[i]==s1[i+1])
        {
            for(j=i+1;j<n1;j++)
                s1[j]=s1[j+1];
            n1--;
        }
    }
    for(i=0;i<n2-1;i++)
    {
        if(s2[i]==s2[i+1])
        {
            for(j=i+1;j<n1;j++)
                s2[j]=s2[j+1];
            n1--;
        }
    }
    j=0;
    for(i=0;i<n1;i++)
    {
        if(s1[i]!=s2[j])
        {
            c=1;
            break;
        }
        j++;
        if(j==n2)
            break;
    }
    if(c==1)
        cout<<"not equal";
    else
        cout<<"equal";
    return 0;
}
