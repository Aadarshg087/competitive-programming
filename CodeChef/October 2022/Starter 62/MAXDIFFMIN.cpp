#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // Given a<b<c;
        int a, b, c;
        cin >> a >> b >> c;
        cout << c - a << endl;
    }

    return 0;
}