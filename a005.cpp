#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    while (a--)
    {
        int b[4] = {0};
        for (int i = 0; i < 4; i++)
        {
            cin >> b[i];
        }
        if (b[1] - b[0] == b[3] - b[2])
        {
            cout << 2 * b[3] - b[2];
        }
        else
        {
            cout << b[3] * (b[3] / b[2]);
        }
    }
}