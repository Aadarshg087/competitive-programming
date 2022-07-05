/* Chef wants to appear in a competitive exam. To take the exam, there are following requirements:

Minimum age limit is XX (i.e. Age should be greater than or equal to XX).
Age should be strictly less than YY.
Chef's current Age is AA. Find whether he is currently eligible to take the exam or not. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a >= x && a < y)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}