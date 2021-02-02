#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int ary[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int f = 0; f < y; f++)
        {
            cin >> ary[i][f];
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int f = 0; f < x; f++)
        {
            cout << ary[f][i] << " ";
        }
        cout << endl;
    }
}