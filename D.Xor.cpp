#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,q;
    cin>>a>>b>>q;
    if (q==1)
    {
        cout<<a<<endl;
    }
    else if (q==2)
    {
        cout<<b<<endl;
    }
    else
    {
        long long x;
        if ((q-1)%3==0)
        {
            x = a;
        }
        else if ((q-1)%3==1)
        {
            x = b;
        }
        else
        {
            x = a^b;
        }
        cout<<x<<endl;
    }
    return 0;
}
