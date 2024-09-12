#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 100001;
int spf[N], occupied[N], isActive[N];
void seive()
{
    for (int i = 1; i < N; i++)
        spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = i * 2; j < N; j += i)
        {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}

vector<int> primeFactors(int n)
{
    vector<int> primes;
    while (n != 1)
    {
        int x = spf[n];
        while (n % x == 0)
            n /= x;
        primes.push_back(x);
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        char t;
        int x;
        cin >> t >> x;
        vector<int> primes = primeFactors(x);
        if (t == '+')
        {
            if (isActive[x])
                cout << "Already on" << endl;
            else
            {
                int collision = 0;
                for (auto &it : primes)
                {
                    if (occupied[it])
                        collision = occupied[it];
                }
                if (collision)
                    cout << "Conflict with " << collision << endl;
                else
                {
                    cout << "Success" << endl;
                    for (auto &it : primes)
                    {
                        occupied[it] = x;
                    }
                    isActive[x] = 1;
                }
            }
        }
        else
        {
            if (!isActive[x])
                cout << "Already off" << endl;
            else
            {
                cout << "Success" << endl;
                isActive[x] = 0;
                for (auto &it : primes)
                {
                    occupied[it] = 0;
                }
            }
        }
    }

    return 0;
}