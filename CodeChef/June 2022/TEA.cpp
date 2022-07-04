/*Chef has planned that he will drink exactly XX liters of tea daily. He has an empty jar having a capacity of YY liters.

Chef can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Chef is charged ZZ rupees.

Chef wonders what is the minimum amount of money he has to pay for drinking exactly XX liters of tea daily. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        int i;
        cin >> x >> y >> z;
        if (x > y)
        {
            int a = x / y;
            i = x % y;
            if (i > 0)
            {
                cout << (a * z) + (z) << endl;
            }
            else
                cout << (a * z) << endl;
        }
        else
            cout << z << endl;
    }

    return 0;
}