#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
// Basic Approach ----------------------
/*
- Put them in one array and sort them and simply return the k - 1 position
- T.C - O((m + n)log(m + n))
- S.C - O(m + n)
*/

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        v.push_back(arr2[i]);
    }

    sort(v.begin(), v.end());

    return v[k - 1];
}

// Better Approach ---------------------------
/*
- Use the approach of merge sort and fill the element according to the value
- Now, you will have the sorted array and simply return the k - 1 position
- T.C - O(m + n)
- S.C - O(m + n)
*/

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i++]);
        }
        else
        {
            v.push_back(arr2[j++]);
        }

        // Bit optimization, this will make  O(k) time complexity for certain cases
        if (v.size() == k)
        {
            return v.back();
        }
    }

    while (i < n)
        v.push_back(arr1[i++]);

    while (j < m)
        v.push_back(arr2[j++]);

    return v[k - 1];
}

/*
// Optimal Approach --------------------------
// Complex approach can't explain here :|
T.C - O(log(min(n,m)))
S.C - O(1)
*/
int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    if (n > m)
        return kthElement(arr2, arr1, m, n, k);

    int low = max(0, k - m);
    int high = min(k, n);

    while (low <= high)
    {
        int cut1 = (low + high) >> 1;
        int cut2 = k - cut1;
        int l1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : arr1[cut1];
        int r2 = cut2 == m ? INT_MAX : arr2[cut2];

        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }

        else if (l1 > r2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 1;
}

int main()
{

    return 0;
}