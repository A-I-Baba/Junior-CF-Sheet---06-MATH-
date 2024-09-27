#include<bits/stdc++.h>
using namespace std;
long long int sumEven(long long A, long long B)
{
 
    long long int firstEven = (A % 2 == 0) ? A : A + 1;
 
    long long int lastEven = (B % 2 == 0) ? B : B - 1;
 
    if (firstEven > lastEven) return 0;
 
    long long int count = ((lastEven - firstEven) / 2) + 1;
    return count * (firstEven + lastEven) / 2;
}
long long int sumOdd(long long A, long long B)
{
 
    long long int firstOdd = (A % 2 != 0) ? A : A + 1;
 
    long long int lastOdd = (B % 2 != 0) ? B : B - 1;
 
    if (firstOdd > lastOdd) return 0;
 
    long long int count = (lastOdd - firstOdd) / 2 + 1;
    return count * (firstOdd + lastOdd) / 2;
}
int main ()
{
    long long int a,b,totalSum,evenSum,oddSum,sumUpToB,sumUpToA;
    cin>>a>>b;
    if (a>b)
    {
        swap(a,b);
    }
    sumUpToB = (b*(b+1))/2;
    sumUpToA = ((a-1)*((a-1)+1))/2;
    totalSum = sumUpToB - sumUpToA;
    evenSum = sumEven(a, b);
    oddSum = sumOdd(a, b);
    cout << totalSum << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;
    return 0;
    return 0;
}
