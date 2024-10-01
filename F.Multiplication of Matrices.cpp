#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
int main ()
{
    // // Only for input & output purposes
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // // Only for input & output purposes

    int rA, cA;
    cin >> rA >> cA;
    int A[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cin >> A[i][j];
        }
    }
    
    int rB, cB;
    cin >> rB >> cB;
    int B[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cin >> B[i][j];
        }
    }
    
    if (cA != rB)
    {
        cout << "Multiplication not possible!" << endl;
        return 0;
    }
    
    int arr[MAX_SIZE][MAX_SIZE] = {0};

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            for (int k = 0; k < cA; k++)
            {
                arr[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
