#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int moneyReq = n * x;
        if (moneyReq <= k)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}