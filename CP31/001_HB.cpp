#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k, number;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        bool asc = true;
        int prev;
        bool first = true;

        while (n--)
        {
            cin >> number;
            if (!first)
            {
                if (number < prev)
                    asc = false;
            }
            prev = number;
            first = false;
        }

        if (asc || k != 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*

// Analyis:

-> Given a set of numbers, can we sort them by reversing k elements at a time?
    -> When is it possible? when is it not possible?
    : if i can swap two numbers that is if k>=2, then i can reverse any array, regardless of what numbers i have in the array
    : if k==1, then there's no swapping/reversing at all, so i can make any changes to my array
    : therefore if k !=1 then its an automatic yes, else its an automatic no


*/
