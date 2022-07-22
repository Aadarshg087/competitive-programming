#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // x-->fixed working hours for the employess
        // y-->relaxed working hours on friday only
        int x, y;
        cin >> x >> y;
        cout << (4 * x) + y << endl;
    }
    return 0;
}