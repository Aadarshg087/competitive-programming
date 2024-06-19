#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    vector<int> v;
    Heap()
    {
        v.push_back(0);
    }
    void insertion(int val)
    {
        v.push_back(val);
        int i = v.size() - 1;
        while (i > 1)
        {
            int parent = i / 2;
            if (v[parent] > v[i])
            {
                swap(v[i], v[parent]);
                i = parent;
            }
            else
                return;
        }
    }

    int deletion()
    {
        int ans = (v.size() > 1) ? v[1] : 0;
        v[1] = v[v.size() - 1];
        v.pop_back();
        int i = 1;
        int n = v.size();
        while (i < n)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int smaller = -1;
            if (leftChild < n && rightChild < n)
            {
                smaller = (v[leftChild] < v[rightChild]) ? leftChild : rightChild;
            }
            if (smaller != -1)
            {
                swap(v[smaller], v[i]);
                i = smaller;
            }
            else if (leftChild < n)
            {
                swap(v[leftChild], v[i]);
                i = leftChild;
            }
            else
                break;
        }
        return ans;
    }

    void printHeap()
    {
        int n = v.size();
        for (int i : v)
            cout << i << " ";
        cout << endl;

        // for (int i = 1; i < n; i++)
        // {
        //     int leftChild = 2 * i;
        //     int rightChild = 2 * i + 1;
        //     cout << v[i] << ": ";
        //     if (leftChild < n)
        //         cout << v[leftChild] << " ";
        //     if (rightChild < n)
        //         cout << v[rightChild] << " ";
        // }
        // cout << endl;
    }
};

vector<int> minHeap(int n, vector<vector<int>> &q)
{

    // This problem is not getting AC for some reason.  I have tried to debug but failed
    // Eventaully, did with normal pq
    Heap h;
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq; //
    for (int i = 0; i < q.size(); i++)
    {
        if (q[i][0] == 0)
        {
            // pq.push(q[i][1]); // used the normal pq
            h.insertion(q[i][1]);
        }
        else
        {
            /*
                // Got accepted using the normal pq
                pq.pop();
                int top = pq.top();
                ans.push_back(top);
            */
            ans.push_back(h.deletion());
        }
        h.printHeap();
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            int tt;
            cin >> tt;
            if (tt == 0)
            {
                int ttt;
                cin >> ttt;
                temp.push_back(tt);
                temp.push_back(ttt);
            }
            else
            {
                temp.push_back(tt);
            }
            v.push_back(temp);
        }
        cout << "----------" << endl;

        // for (vector<int> i : v)
        // {
        //     for (int it : i)
        //         cout << it << " ";
        //     cout << endl;
        // }

        vector<int> ans = minHeap(n, v);
        cout << "----" << endl;
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
