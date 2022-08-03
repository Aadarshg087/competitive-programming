#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string str = "aeiou";
        int n;
        string word;
        cin >> n;
        cin >> word; // apple
        int count = 0;
        int str_size = str.length() - 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j <= str_size; j++)
            {
                if (word[i] != str[j])
                {
                    count++;
                    cout << count << " ";
                }
                else if (word[i] == str[j])
                {
                    break;
                }
            }
            if (count >= 4)
            {
                // Is it easy to pronounce?
                cout << "No" << endl;
                break;
            }
            else
            {
                // Is it easy to pronounce?
                cout << "Yes" << endl;
                break;
            }
        }
    }
    return 0;
}