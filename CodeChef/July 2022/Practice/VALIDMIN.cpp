#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int min_1 = min(a, b);
        int min_2 = min(b, c);
        int min_3 = min(c, a);
        if (min_1 == min_2 && min_2 == min_3)
        {
            cout << "Yes"
                 << "\n";
        }
        else
            cout << "No"
                 << "\n";
    }
    return 0;
}