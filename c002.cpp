#include <bits/stdc++.h>
using namespace std;

int f91(int w)
{
    if (w >= 101)
    {
        return w - 10;
    }
    else if (w <= 100)
    {
        f91(w + 11);
    }
}

int main()
{
    int x = 0;
    while (cin >> x)
    {
        if (x == 0)
        {
            return 0;
        }
        if (x < 100)
        {
            cout << "f91(" << x << ") = " << f91(x) - 1 << endl;
        }
        else
        {
            cout << "f91(" << x << ") = " << f91(x) << endl;
        }
    }
}