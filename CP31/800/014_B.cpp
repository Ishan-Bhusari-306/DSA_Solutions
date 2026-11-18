#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ele;
        int s = 0;
        n = 3;
        while (n--)
        {
            cin >> ele;
            s += ele;
        }
        if (s % 2 != 0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}