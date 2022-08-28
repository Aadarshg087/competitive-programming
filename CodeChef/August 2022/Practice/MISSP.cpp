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
        int n;
        cin >> n;
        int arr[n];
        // Inserting elements into the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // Element picker
        for (int i = 0; i < n; i++)
        {
            // Updating the element to 0 which are repeating even number of times
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }

        // Printing the non-zero elements in the array
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}