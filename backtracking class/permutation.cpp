#include<bits/stdc++.h>
using namespace std;
void permute(char str[],int l,int r)
{
    int i;
    if(l==r)
    {
        cout<<str<<endl;
        return ;
    }
    for(i=l;i<r;i++)
    {
        if(str[l]==str[i]&&i!=l)
        {
            //cout<<"hello";
            }
        else{
            swap(str[l],str[i]);
            permute(str,l+1,r);
            swap(str[l],str[i]);
        }

    }
}
int main()
{
    char str[]="aabc";
    int len=strlen(str);
    permute(str,0,len);
    return 0;
}
