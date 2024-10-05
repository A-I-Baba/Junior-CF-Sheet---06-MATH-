#include<bits/stdc++.h>
using namespace std;
long long fac(int n)
{
    long long x = 1;
    for (int i=2;i<=n;i++)
    {
        x *= i;
    }
    return x;
}
long long NCR(int a,int b)
{
    return fac(a)/(fac(b)*fac(a-b));
}
long long NPR(int a,int b)
{
    return fac(a)/fac(a-b);
}
int main()
{
    // // Only for input & output purposes
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // // Only for input & output purposes

    int a,b;
    cin>>a>>b;
    long long ncr = NCR(a,b);
    long long npr = NPR(a,b);
    cout<<ncr<<" "<<npr<<endl;
    return 0;
}
