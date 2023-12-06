#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <new>
using namespace std;

// Macros
#define ll long long int

void solve2()
{

    string s;
    cin >> s;
    int n = s.size();
    list<char> l;
    auto lower = l.begin();
    auto upper = l.begin();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            if (lower != l.end())
                l.erase(lower);
        }
        else if (s[i] == 'B')
        {
            if (upper != l.end())
                l.erase(upper);
        }
        else
        {
            l.push_front(s[i]);
            if (s[i] <= 90 && s[i] >= 65)
            {
                upper = l.begin();
            }
            else
            {
                lower = l.begin();
            }
        }
    }

    l.reverse();
    for (auto i : l)
        std::cout << i;
    std::cout << endl;
}

void solve1()
{
    try
    {
        string s;
        cin >> s;
        int n = s.size();
        list<char> l;
        auto lower = l.begin();
        auto upper = l.begin();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                if (lower != l.end())
                    l.erase(lower);
            }
            else if (s[i] == 'B')
            {
                if (upper != l.end())
                    l.erase(upper);
            }
            else
            {
                l.push_front(s[i]);
                if (s[i] <= 90 && s[i] >= 65)
                {
                    upper = l.begin();
                }
                else
                {
                    lower = l.begin();
                }
            }
        }

        l.reverse();
        for (auto i : l)
            std::cout << i;
        std::cout << endl;
    }
    catch (const std::bad_alloc &e)
    {
        // Handle bad_alloc exception
        std::cerr << "Memory allocation error: " << e.what() << std::endl;
    }
}

void solve()
{
    // string s;
    // cin >> s;
    // int n = s.size();

    // char arr[n];
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == 'b')
    //     {
    //         bool removed = false;
    //         for (int i = index - 1; i >= 0; i--)
    //         {
    //             if (arr[i] <= 90 && arr[i] >= 65)
    //             {

    //                 removed = true;
    //                 break;
    //             }
    //         }

    //         if (removed)
    //         {
    //         }
    //     }
    //     else if (s[i] == 'B')
    //     {
    //         for (int i = index - 1; i >= 0; i--)
    //         {
    //             if (arr[i] <= 122 && arr[i] >= 97)
    //             {
    //             }
    //         }
    //     }
    //     else
    //     {
    //         arr[index] = s[i];
    //     }
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }
    return 0;
}