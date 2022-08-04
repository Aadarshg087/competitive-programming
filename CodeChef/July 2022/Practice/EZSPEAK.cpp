#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string vowel = "aeiou";
        int n;
        int k = 0;
        string word;
        cin >> n;
        cin >> word; // apple
        int count = 0;
        int vowel_size = vowel.length() - 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j <= vowel_size; j++)
            {
                if (word[i] == vowel[j])
                {
                    k = 1;
                    break;
                }
                else if (k == 0)
                {
                    count++;
                }
            }
        }
        if (count >= 4)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}