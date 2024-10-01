#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // // Only for input & output purposes
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // // Only for input & output purposes

    long long n,k;
    cin>>n;
    k = (-1 + sqrt(1+(8*n)))/2;
    if (k<=n)
    {
        cout<<k<<endl;
    }
    return 0;
}
