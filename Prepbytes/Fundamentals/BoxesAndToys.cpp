#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n] = {};
    int c[n] = {};
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> t[i] >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (t[i] < n)
            count++;
    }
    cout << count << endl;

    return 0;
}
