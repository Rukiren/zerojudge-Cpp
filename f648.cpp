#include <bits/stdc++.h>
using namespace std;
int main()
{
    int aa = 0, bb = 0;
    vector<string> user;
    vector<string> serc;
    stringstream ss;
    stringstream is;
    string s, vd;
    getline(cin, s);
    getline(cin, vd);
    string a;
    ss.clear();
    ss.str(s);
    while (1)
    {
        ss >> a;
        if (ss.fail())
            break;
        user.push_back(a);
        aa++;
    }
    is.clear();
    is.str(vd);
    while (1)
    {
        is >> a;
        if (is.fail())
            break;
        serc.push_back(a);
        bb++;
    }
    int temp = 0;
    for (int i = 0; i < bb; i++)
    {
        temp = 0;
        for (int s = 0; s < aa; s++)
        {
            if (user[s] == serc[i])
            {
                temp++;
            }
        }
        if (temp == 0)
        {
            cout << "No" << endl;
        }
        else if (temp == 1)
        {
            cout << "Yes" << endl;
        }
        else if (temp == 2)
        {
            cout << "Pathetic" << endl;
        }
    }
}