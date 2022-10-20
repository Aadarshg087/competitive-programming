#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) % 2 != 0)
        {
            cout << "Yes" << endl;
        }
        else if ((b + c) % 2 != 0)
        {
            cout << "Yes" << endl;
        }
        else if ((a + c) % 2 != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}