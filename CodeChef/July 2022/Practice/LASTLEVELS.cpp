#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // x-->levels
        // y-->minute played
        // z-->break time
        int x, y, z;
        cin >> x >> y >> z;
        int count = 0;
        for (int i = 1; i < x; i++)
        {
            if (i % 3 == 0)
            {
                count++;
            }
        }
        int minutes = (x * y) + (count * z);
        cout << minutes << endl;
    }
    return 0;
}