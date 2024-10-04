#include<bits/stdc++.h>
using namespace std;

long long convertToDecimal(const string& N, int base)
{
    long long decimalValue = 0;
    int power = 0;

    for (int i = N.size() - 1; i >= 0; i--) {
        int digit;
        if (N[i] >= '0' && N[i] <= '9') {
            digit = N[i] - '0';
        }
        else
        {
            digit = N[i] - 'A' + 10;
        }
        decimalValue += digit * pow(base, power);
        power++;
    }
    return decimalValue;
}

string convertToBaseX(long long decimalNumber, int base)
{
    string result = "";

    while (decimalNumber > 0) {
        int remainder = decimalNumber % base;
        if (remainder < 10) {
            result += (char)(remainder + '0');
        }
        else
        {
            result += (char)(remainder - 10 + 'A'); 
        }
        decimalNumber /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    // // Only for input & output purposes
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // // Only for input & output purposes
    
    int T;
    cin >> T;
    string N;
    int X;
    cin >> N >> X;

    if (T == 1) {
        
        long long decimalValue = convertToDecimal(N, X);
        cout << decimalValue << endl;
    }
    else if (T == 2)
    {
        long long decimalNumber = stoll(N);
        string baseXValue = convertToBaseX(decimalNumber, X);
        cout << baseXValue << endl;
    }
    return 0;
}
