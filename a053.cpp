#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        if (a <= 10)
        {
            cout << a * 6 << endl;
        }
        if (a > 10 && a <= 20)
        {
            cout << 60 + (a - 10) * 2 << endl;
        }
        if (a > 20 && a <= 40)
        {
            cout << 80 + (a - 20) << endl;
        }
        if (a > 40)
        {
            cout << 100 << endl;
        }
    }
}