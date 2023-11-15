#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

pair<bool, int> Palindrome_(int i)
{
    int temp = i;
    int rem;
    int reverse = 0;
    int digits = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
        digits++;
    };
    // cout << "Reverse: " << reverse << " "
    //  << "i: " << i << endl;
    if (reverse == i)
        return make_pair(true, digits);
    else
        return make_pair(false, digits);
}

void palindromePrimes(int n)
{
    int count = 2;
    int i = 2;
    bool isPrime = true;
    int countEven = 0;
    int countOdd = 1;
    while (count <= n)
    {
        isPrime = true;
        if ((i & 1) == 0)
        {
            i++;
            continue;
        }

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            pair<bool, int> isPalindrome = Palindrome_(i);
            // cout << i << endl;
            if (isPalindrome.first == true && ((isPalindrome.second & 1) == 0))
            {
                countEven++;
                count++;
            }
            else if (isPalindrome.first == true && ((isPalindrome.second & 1) == 1))
            {
                countOdd++;
                count++;
            }
        }
        i++;
    }

    cout << countEven << " " << countOdd << endl;
}

void solve()
{
    int n;
    cin >> n;
    palindromePrimes(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}