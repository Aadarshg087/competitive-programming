// One of the best questions. Really made me think!

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        int k = 0;
        string check = "T";
        cin >> n;
        int countH = 0, countT = 0;
        string snake;
        cin >> snake;
        for (int i = 0; i < n; i++)
        {
            if (snake[i] == 'T') // H..T..H
            {
                if (check == "H")
                {
                    check = 'T';
                    continue;
                }
                else
                {
                    cout << "Invalid" << endl;
                    k = 1;
                    break;
                }
            }
            else if (snake[i] == '.')
            {
                continue;
            }
            else if (snake[i] == 'H')
            {
                if (check == "T")
                {
                    check = 'H';
                    continue;
                }
                else
                {
                    // check = 'H';
                    cout << "Invalid" << endl;
                    k = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (snake[i] == 'H')
            {
                countH++;
            }
            else if (snake[i] == 'T')
            {
                countT++;
            }
            else
                continue;
        }

        if (countH == countT && k == 0)
        {
            cout << "Valid" << endl;
        }
        else if (countH != countT && k == 0)
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}