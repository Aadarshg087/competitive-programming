#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int T, N;
        int ans = 0;
        cin >> T >> N;
        int x = N * N;
        for (int i = 1; i <= T; i++)
        {
            ans = ans + x;
        }
        cout << ans << endl;
    }

    return 0;
}