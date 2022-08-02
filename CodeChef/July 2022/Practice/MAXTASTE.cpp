#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int best1 = max(a, b);
        int best2 = max(c, d);
        cout << best1 + best2 << endl;
    }
    return 0;
}