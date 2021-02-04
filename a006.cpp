#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double temp = sqrt(b * b - 4 * a * c);
    if (temp < 0)
    {
        cout << "No real root";
    }
    else
    {
        sqrt(temp);
        double x1 = 0, x2 = 0;
        if (temp == 0)
        {
            cout << "Two same roots x=" << -b / (2 * a);
        }
        else if (temp < 0)
        {
            cout << "No real root";
        }
        else
        {
            cout << "Two different roots x1=" << (temp - b) / (2 * a) << " , x2=" << -(temp + b) / (2 * a);
        }
    }
}