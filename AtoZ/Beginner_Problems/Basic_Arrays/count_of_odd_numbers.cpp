#include <bits/stdc++.h>
using namespace std;

int countOddNumbers(vector<int> &arr)
{
    int count = 0;

    for (int num : arr)
    {
        if (num % 2 != 0)
        {
            count++;
        }
    }

    return count;
}