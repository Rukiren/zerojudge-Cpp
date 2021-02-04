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
        if (temp == 0)
        {
            temp = -b / (2 * a);
            if (temp == 0)
            {
                cout << "Two same roots x=" << 0;
            }
            else
            {
                cout << "Two same roots x=" << temp;
            }
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