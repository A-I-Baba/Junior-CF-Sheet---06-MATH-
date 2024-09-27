#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    cin>>n;
    bool prime = true;
    if (n<=1)
    {
        prime = false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i==0)
            {
                prime = false;
                break;
            }
        }
    }
    if (prime)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
