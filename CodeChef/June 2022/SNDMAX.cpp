/* Write a program that accepts sets of three numbers, and prints the second-maximum number among the three. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x > y && x < z || x < y && x > z)
        {
            cout << x << endl;
        }
        else if (y > x && y < z || y < x && y > z)
        {
            cout << y << endl;
        }
        else
            cout << z << endl;
    }
    return 0;
}