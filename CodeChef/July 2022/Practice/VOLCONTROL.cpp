#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, y;
        cin >> x >> y;
        cout << abs(x - y) << endl;
    }
    return 0;
}