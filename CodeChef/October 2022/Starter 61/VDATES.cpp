#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int D, L, R;
        cin >> D >> L >> R;
        if (L <= D && D <= R)
        {
            cout << "Take second dose now" << endl;
        }
        else if (D < L)
        {
            cout << "Too Early" << endl;
        }
        else
        {
            cout << "Too Late" << endl;
        }
    }

    return 0;
}