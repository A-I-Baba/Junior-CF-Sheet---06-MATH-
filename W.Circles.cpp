#include<bits/stdc++.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main()
{
    double X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    double centerA_x = (X1 + X2) / 2.0;
    double centerA_y = (Y1 + Y2) / 2.0;
    double centerB_x = (X3 + X4) / 2.0;
    double centerB_y = (Y3 + Y4) / 2.0;

    double radiusA = distance(X1, Y1, X2, Y2) / 2.0;
    double radiusB = distance(X3, Y3, X4, Y4) / 2.0;

    double centerDistance = distance(centerA_x, centerA_y, centerB_x, centerB_y);

    if (centerDistance <= (radiusA + radiusB))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
