/* Chef's coding class is very famous in Chefland.

This year XX students joined his class and each student will require one chair to sit on. Chef already has YY chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // x--> Total Students
        // y--> Total Chairs
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << x - y << endl;
        }
        else
            cout << "0" << endl;
    }

    return 0;
}