#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x, term=1.0, sum=0.0,epsilon=10e-7;
    int i=1;
    cin>>x;
    while(term>epsilon)
    {
        sum+=term;
        term=term*x/i;
        i++;
    }
    cout<<sum;
    return 0;
}
