#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int


// -------------------- Incomplete --------------------------
void solve()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    set<string> s1;
    set<string> s2;
    set<string> s3;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s1.insert(temp);
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s2.insert(temp);
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s3.insert(temp);
    }

    // for (auto i : s1)
    //     cout << i << " ";
    // cout << endl;

    // for (auto i : s2)
    //     cout << i << " ";
    // cout << endl;

    // for (auto i : s3)
    // {
    //     // cout << "Hello world" << endl;
    //     cout << i << " ";
    // }
    // cout << endl;
    auto i = s1.begin();
    while (i != s1.end())
    {

        string temp = *i;
        cout << temp << " ";
        cout << endl;
        if (s2.find(temp) != s2.end())
        {
            cout << "helo" << endl;
            if (s3.find(temp) != s3.end())
            {
                cout << "bye" << endl;
                s1.erase(temp);
                s2.erase(temp);
                s3.erase(temp);
            }
            else
            {
                cout << "what" << endl;
                count1++;
                count2++;
                s1.erase(temp);
                s2.erase(temp);
            }
        }
        else if (s3.find(temp) != s3.end())
        {
            cout << "wow" << endl;
            auto i = s1.erase(temp);
            auto i = s3.erase(temp);
            count1++;
            count3++;
        }
        else
        {
            cout << "thank you" << endl;
            count1 += 2;
        }
    }

    for (auto i = s3.begin(); i != s3.end(); i++)
    {
        string temp = *i;
        if (s2.find(temp) != s2.end())
        {
            s2.erase(temp);
            s3.erase(temp);
            count2++;
            count3++;
        }
    }
    // count1 += (2 * s1.size());
    count2 += (2 * s2.size());
    count3 += (2 * s3.size());

    cout << count1 << " " << count2 << " " << count3 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}