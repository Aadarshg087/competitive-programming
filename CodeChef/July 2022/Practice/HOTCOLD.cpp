#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int temp;
        cin >> temp;
        if (temp <= 20)
        {
            cout << "Cold"
                 << "\n";
        }
        else
            cout << "Hot"
                 << "\n";
    }
    return 0;
}