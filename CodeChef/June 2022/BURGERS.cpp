/* Chef is fond of burgers and decided to make as many burgers as possible.

Chef has A patties and BB buns. To make 11 burger, Chef needs 11 patty and 11 bun.
Find the maximum number of burgers that Chef can make. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << min(a, b) << endl;
    }

    return 0;
}