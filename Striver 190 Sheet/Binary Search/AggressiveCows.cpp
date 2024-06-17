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

/*
// BASIC SOLUTION

- In this approach we trying to check whether it is possible to fit the cows with distance i in the first for loop.
- Can we place function is recieving the distance and try to place while maintaing the that distance(atleast).
- If countCows >= cows, that means we are able to put the cows with that distacne. If not, we will return false
- The moment we recieve false, from the CanWePlace function, that means the max distance we can put is i - 1, cause it failed at i.
T.C - O(nlogn) + O(n^2)
S.C - O(1)

*/

bool CanWePlace(vector<int> &v, int distance, int n, int cows)
{
    int countCows = 1;
    int lastCow = v[0];
    for (int i = 1; i < n; i++) // O(n)
    {
        if (v[i] - lastCow >= distance)
        {
            countCows++;
            lastCow = v[i];
        }
        if (countCows >= cows)
            return 1;
    }
    return 0;
}
void solve(vector<int> &v, int n, int c)
{
    sort(v.begin(), v.end()); // O(nlogn)
    int maxi = v[v.size() - 1];
    int mini = v[0];
    for (int i = 1; i < (maxi - mini); i++) // O(n)
    {
        if (CanWePlace(v, i, n, c)) // O(n)
        {
            continue;
        }
        else
        {
            cout << i - 1 << endl;
            return;
        }
    }
}

/*
// BEST APPRAOCH
- We are finding the range of potential answers and we can observe that starting part of the seq is true for placement and other part is not.
- We just have to find the maximum value which is true for CanWePlace function

- T.C - O(nlong) + O(nlogn)
- S.C - O(1)

*/

void solve2(vector<int> &v, int n, int c)
{
    sort(v.begin(), v.end()); // O(nlogn)
    int low = 1;
    int high = v[n - 1] - v[0];
    int mid = 0;
    while (low <= high) // O(logn)
    {
        mid = low + (high - low) / 2;
        if (CanWePlace(v, mid, n, c)) // O(nlogn)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << high << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v[i] = temp;
        }

        solve2(v, n, c);
    }

    return 0;
}