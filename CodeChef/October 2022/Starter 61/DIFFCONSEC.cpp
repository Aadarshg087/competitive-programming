#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        int count = 0;
        cin >> n;
        string S;
        cin >> S;
        for (int i = 0; i < n; i++)
        {
            if (S[i] == S[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}