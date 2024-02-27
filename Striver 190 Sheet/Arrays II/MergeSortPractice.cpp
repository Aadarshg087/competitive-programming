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


// Striver's code
#include <bits/stdc++.h>
#define ll long long int
ll merge(vector<ll> &arr, ll low, ll mid, ll high)
{
    vector<ll> temp;    // temporary array
    ll left = low;      // starting index of left half of arr
    ll right = mid + 1; // starting index of right half of arr

    // Modification 1: cnt variable to count the pairs:
    ll cnt = 0;

    // storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

ll mergeSort(vector<ll> &arr, ll low, ll high)
{
    ll cnt = 0;
    if (low >= high)
        return cnt;
    ll mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);      // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);    // merging sorted halves
    return cnt;
}

ll numberOfInversions(vector<ll> &a, int n)
{

    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}
long long getInversions(long long *arr, int n)
{
    // Write your code here.
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i];
    }

    return numberOfInversions(v, n);
}

// My code
int mergeVector(vector<int> &v, int low1, int high1, int low2, int high2)
{
    int count = 0;
    vector<int> temp;
    int i = low1;
    int j = low2;
    while (i != high1 + 1 && j != high2 + 1)
    {
        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            // cout << v[i] << " " << v[j] << endl;
            // cout << high1 - i + 1 << endl;
            count += high1 - i + 1;
            temp.push_back(v[j]);
            j++;
        }
    }

    while (i < high1 + 1)
        temp.push_back(v[i++]);
    while (j < high2 + 1)
        temp.push_back(v[j++]);

    // for (int i : temp)
    //     cout << i << " ";
    // cout << endl;

    int mini = min(low1, low2);
    int maxi = max(high1, high2);
    int idx = 0;
    for (int i = low1; i <= maxi; i++)
        v[i] = temp[idx++];
    return count;
}

int mergeSort(vector<int> &v, int low, int high)
{
    // cout << low << " " << high << " - YES" << endl;
    int count = 0;
    // Base condition
    if (low >= high)
        return count;

    int mid = low + (high - low) / 2;
    // Relation
    count += mergeSort(v, 0, mid);
    count += mergeSort(v, mid + 1, high);
    count += mergeVector(v, 0, mid, mid + 1, high);
    return count;
}

int main()
{
    vector<int> v{2, 5, 1, 3, 4};
    cout << mergeSort(v, 0, v.size() - 1) << endl;

    for (int i : v)
        cout << i << " ";
    cout << endl;

    // vector<int> v{2, 4, 6, 1, 3, 8};
    // vector<int> b{1, 3, 8};
    // mergeVector(v, 0, 2, 3, 5);

    return 0;
}