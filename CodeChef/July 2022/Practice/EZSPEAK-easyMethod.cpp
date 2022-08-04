#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;

        string word;
        cin >> word;

        int k = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u')
            {
                count++;
            }
            else
                count = 0;

            // if consonants are above 4 in a row
            if (count >= 4)
            {
                k = 1;
                break;
            }
        }
        if (k == 1)
        {
            // Is it easy to pronounce?
            cout << "No" << endl;
        }
        else
            // Is it easy to pronounce?
            cout << "Yes" << endl;
    }
    return 0;
}