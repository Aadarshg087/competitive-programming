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
bool isPossible(vector<int> &A, int B, int mid)
{
    int pages = 0;
    int AlloStudents = 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > mid)
            return false;
        if (pages + A[i] > mid)
        {
            AlloStudents++;
            pages += A[i];
        }
        else
        {
            pages += A[i];
        }
    }

    if (AlloStudents > B)
        return false;
    else
        return 1;
}

int books(vector<int> &A, int B)
{
    int low = 0;
    int high = accumulate(A.begin(), A.end(), high);
    int ans = 0;
    while (low <= high)
    {
        int mid = (high + low) >> 1;
        if (isPossible(A, B, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{

    return 0;
}