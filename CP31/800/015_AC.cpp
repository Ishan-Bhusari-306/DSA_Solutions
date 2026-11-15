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
        cin >> n;
        while (n--)
        {
            cin >> ele;
            s += ele;
        }
        if (s % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}