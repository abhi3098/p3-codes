#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        if(b>c)
            return c;
        else
            return b;
    }
    else if(b>c)
    {
        if(a>c)
            return c;
        else
            return a;
    }
    else
    {
        if(a>b)
            return b;
        else
            return a;
    }
}
int main()
{
    int i,j,k=0,n,m,l,f;
    cin>>n;
    cin>>m;
    cin>>l;
    int arr[l],arr1[n],v,arr2[m],arr3[n+m+l];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(j=0;j<m;j++)
        cin>>arr2[j];
    for(f=0;f<l;f++)
        cin>>arr[f];
    i=j=f=0;
    while(i<n&&j<m&&f<l)
    {
        v=fun(arr1[i],arr2[j],arr[f]);
        if(arr1[i]==v)
        {
            arr3[k]=arr1[i];
            i++;
        }
        else if(arr2[j]==v)
        {
            arr3[k]=arr2[j];
            j++;
        }
        else
        {
            arr3[k]=arr[f];
            f++;
        }
        k++;
    }
    if(i==n)
    {
        while(f<l&&j<m)
    {
        if(arr[f]<arr2[j])
        {
            arr3[k]=arr[f];
            f++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    }
    else if(f==l)
    {
        while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    }
    else
    {
        while(i<n&&f<l)
    {
        if(arr1[i]<arr[f])
        {
            arr3[k]=arr[f];
            f++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    while(f<l)
    {
        arr3[k]=arr[f];
        f++;
        k++;
    }
    for(i=0;i<k;i++)
        cout<<arr3[i]<<" ";
    return 0;
}
