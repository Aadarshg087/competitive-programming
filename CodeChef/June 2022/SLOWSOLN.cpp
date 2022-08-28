#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int maxT, maxN, sumN, ans;
        cin >> maxT >> maxN >> sumN;
        int N = min(maxT, maxN);
        while (maxT != 0 || sumN != 0)
        {
            ans = ans * N;
            maxT = maxT - 1;
            sumN = sumN - N;
        }
        cout << ans << endl;
    }
    return 0;
}