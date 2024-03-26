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

// More of a natural approach ------------------------------
/*
- Sorting the timing according to the arrival time
- Then, we use a priority queue for departure in order to maintain the train leaving the earliest
- If there is collision with the train leaving the earlist. Then, we can push the element and increase the count cause we need a platform
- Otherise, update the pq with new one cause newer train occupies the timing of that station. One pop and push operation
- T.C - O(n) + O(nlogn) + o(nlogn)
- S.C - no. of collision
*/

int findPlatforms(int arr[], int dep[], int n)
{
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = make_pair(arr[i], dep[i]);
    }

    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(v[0].second);
    int mini = v[0].second;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first <= pq.top())
        {
            pq.push(v[i].second);
            count++;
        }
        else
        {
            pq.pop();
            pq.push(v[i].second);
        }
    }

    return count;
}

// Optimal Approach -----------------------------
/*
- Make sure revise this approach, a bit weird and not so natural but works
- We are making sure that if there is a collision a arrival time with the earliest train dep, then we need a platform
- Otherwise, we can manage  the current ones
- At any point, we keep a track maximum tracks needed to maintain train arrival and departure

T.C - O(nlogn) + O(2n)
S.C - O(1)
 */
int findPlatforms(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 1; // arrival pointer
    int j = 0; // dep pointer
    int ans = 1;
    int count = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            count++;
            i++;
        }
        else if (arr[i] > dep[i])
        {
            count--;
            j++;
        }
        ans = max(count, ans);
    }

    return ans;
}

int main()
{

    return 0;
}