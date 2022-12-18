#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((2 * x) > (5 * y))
        {
            cout << "Chocolate" << endl;
        }
        else if ((2 * x) == (5 * y))
        {
            cout << "Either" << endl;
        }

        else
        {
            cout << "Candy" << endl;
        }
    }

    return 0;
}