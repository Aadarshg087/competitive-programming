#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // x-->rebatable amount by company
        // y-->needed amount to fix the damage
        int x, y;
        cin >> x >> y;
        if (y <= x)
        {
            cout << y << endl;
        }
        else
            cout << x << endl;
    }
    return 0;
}