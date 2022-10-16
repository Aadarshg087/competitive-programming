#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 1;

        // picking an element
        for (int i = 0; i < n; i++)
        {
            // checking it in the whole array
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != arr[i])
                {
                    count++;
                }
                else
                {
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}