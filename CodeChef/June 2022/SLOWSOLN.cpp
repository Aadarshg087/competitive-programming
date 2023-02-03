#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        long long ans = 0;
        while (maxT && sumN)
        {
            int n = min(maxN, sumN);
            ans += (n * n);
            sumN -= n;
            maxT--;
        }
        cout << ans << endl;
    }
    return 0;
}