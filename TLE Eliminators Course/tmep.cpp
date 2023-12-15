#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

int main()
{

    vector<int> v = {5, 3, 6, 7, 4, 1};
    make_heap(v.begin(), v.end());
    cout << "Before removal: " << endl;
    cout << v.size() << endl;
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    // cout << v.front() << endl;
    pop_heap(v.begin(), v.end());
    cout << "After removal: " << endl;
    cout << v.size() << endl;
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    int n = v.size();
    // v[n - 1] = 10;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    push_heap(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Break" << endl;
    make_heap(v.begin(), v.end(), greater<int>());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort_heap(v.begin(), v.end(), greater<int>());
    cout << "Hello" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << v.front() << endl;
    // cout << v.front() << endl;
    // push_heap(v.begin(), v.end(), 90);
    // cout << v.size() << endl;
    // int i = 0;
    // cout << v[i] << " ";
    // int left = 2 * i + 1;
    // int right = 2 * i + 2;
    // int parent = (i - 1) / 2;
    // cout << left << " " << right << " " << parent << endl;
    // cout << v.front() << endl;

    return 0;
}