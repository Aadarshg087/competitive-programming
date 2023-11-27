#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

vector<int> prime_at_prime(vector<int> &v)
{
    // Your code here
    vector<int> p;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[j] == 1)
            continue;
        else if (v[j] == 2 && isPrime(j))
            p.push_back(2);
        else if (isPrime(v[j]) && isPrime(j))
        {
            p.push_back(v[j]);
        }
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> nV = prime_at_prime(v);
    for (auto i : nV)
        cout << i << " ";
    cout << endl;
    return 0;
}