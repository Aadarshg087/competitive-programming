/* In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 1010 participants receive rupees XX each.
Participants with rank 1111 to 100100 (both inclusive) receive rupees YY each.
Find the total prize money over all the contestants. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // x--> prize money for 1 - 10
        // y--> prize money for 11 - 100
        int x, y;
        cin >> x >> y;
        int count = 0;
        int count2 = 0;
        for (int i = 1; i <= 10; i++)
        {
            count++;
        }
        for (int i = 11; i <= 100; i++)
        {
            count2++;
        }
        cout << count * x + count2 * y << endl;
    }

    return 0;
}