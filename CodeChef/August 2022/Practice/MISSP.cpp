// On hold
// Need to learn array porperly

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // n = no. of numbers
        int n;
        cin >> n;
        int temp;
        int count = 0;
        int array[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < n; i++)
        {
            temp = array[i];
            for (int j = 0; j < n; j++)
            {
                if (array[j] == temp)
                {
                    count++;
                }
            }
        }
    }
    return 0;
}