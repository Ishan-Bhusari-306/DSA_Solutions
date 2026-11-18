#include <bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int> &arr)
{
    int sum = 0;

    for (int num : arr)
    {
        sum += num;
    }

    return sum;
}

// 2. Count of Odd Numbers in Array
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

// 3. Check if the Array is Sorted (Non-decreasing)
bool isArraySorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    return true;
}

// 4. Reverse an Array (In-place)
void reverseArray(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}