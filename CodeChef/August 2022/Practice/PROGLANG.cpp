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
        if (A == a1 && B == b1 || A == b1 && B == a1)
        {
            cout << "1" << endl;
        }
        else if (A == a2 && B == b2 || A == b2 && B == a2)
        {
            cout << "2" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}