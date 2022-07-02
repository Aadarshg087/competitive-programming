/*Chef has an array A of length N.

In one operation, Chef can choose any two distinct indices i,j (1≤i,j≤N,i≠j) and either change Ai to Aj or change Aj to Ai.

Find the minimum number of operations required to make all the elements of the array equal.*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count;
        int max_freq = 0;
        cout << "Enter the size of the array: " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter the elements: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int frequency[n] = {0};
        cout << "Frequency of all elements of the array: " << endl;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            if (frequency[i] != 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        count++;
                        frequency[j] = 1;
                    }
                }
                if (count > 1 || count == 1)
                {
                    cout << "\n"
                         << arr[i] << " occurs " << count << " times " << endl;
                }
                if (count > max_freq)
                {
                    max_freq = count;
                }
            }
        }
        int operations = n - max_freq;
        cout << "\n Number of operation required: " << operations << endl;
    }

    return 0;
}