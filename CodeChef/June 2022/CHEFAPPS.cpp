/* Chef's phone has a total storage of SS MB. Also, Chef has 22 apps already installed on his phone which occupy XX MB and YY MB respectively.

He wants to install another app on his phone whose memory requirement is ZZ MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        // s:Total MB, x:1 app memery, y: 2 app, z:3 app;
        cin >> s >> x >> y >> z;
        int max = std::max(x, y);
        int sumApp = x + y;
        int diff = s - sumApp;
        if (diff >= z)
        {
            cout << "0" << endl;
        }
        else
        {

            if ((z - diff) <= max)
            {
                cout << "1" << endl;
            }
            else
                cout << "2" << endl;
        }
    }

    return 0;
}