#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        int diff = 0;
        cin >> N >> S;
        for (int i = N; i >= 0; i--)
        {
            for (int j = 0; j <= N; j++)
            {
                if (i + j == S)
                {
                    if (abs(i - j) > diff)
                    {
                        diff = abs(i - j);
                        break;
                    }
                }
            }
            break;
        }
        cout << diff << endl;
    }

    return 0;
}