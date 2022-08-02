/* There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children. */
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int totalChildren, currentCandy;
        cin >> totalChildren >> currentCandy;
        if (currentCandy < totalChildren)
        {
            int neededCandy = totalChildren - currentCandy;
            if (neededCandy % 4 != 0)
            {
                int ans = neededCandy / 4;
                cout << ans + 1 << endl;
            }
            else
                cout << neededCandy / 4 << endl;
        }
        else
            cout << "0" << endl;
    }

    return 0;
}