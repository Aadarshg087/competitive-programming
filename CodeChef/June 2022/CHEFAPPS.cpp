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
        int max = std::max(x,y);
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