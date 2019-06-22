#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,r,c,j;
   cin>>r>>c;
   int a[r][c],e=0,o=0;
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
        cin>>a[i][j];
   }
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        if(a[i][j]%2==0)
            e++;
        else
            o++;
    }
   }
   int ev[e],od[o],k=0,f=0;
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        if(a[i][j]%2==0)
        {
            ev[k]=a[i][j];
            k++;
        }
        else
        {
            od[f]=a[i][j];
            f++;
        }
    }
   }
   for(i=0;i<e;i++)
    cout<<ev[i]<<" ";
cout<<endl;
for(i=0;i<o;i++)
    cout<<od[i]<<" ";
    return 0;
}
