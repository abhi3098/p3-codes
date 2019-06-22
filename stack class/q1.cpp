#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(7);
    s.push(6);
    int c=0;
    while(s.empty()!=true)
    {
        c++;
        s.pop();
    }
    cout<<c;
    return 0;
}
