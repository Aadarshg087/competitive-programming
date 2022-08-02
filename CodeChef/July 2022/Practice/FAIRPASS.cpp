#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        if (n < k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}