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
        int bob = n - k;
        cout << bob << endl;
    }
    return 0;
}