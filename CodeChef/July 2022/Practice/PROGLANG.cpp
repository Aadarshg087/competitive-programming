#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int A, B;
        cin >> A >> B;
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if (A, B == a1, b1 || A, B == b1, a1)
        {
            cout << "1" << endl;
            cout << A << " " << B << endl;
            cout << a1 << " " << b1 << endl;
        }
        else if (A, B == a2, b2 || A, B == b2, a2)
        {
            cout << "2" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}