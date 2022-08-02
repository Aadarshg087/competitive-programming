#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << 7 - b << endl;
        }
        else
            cout << 7 - a << endl;
    }
    return 0;
}