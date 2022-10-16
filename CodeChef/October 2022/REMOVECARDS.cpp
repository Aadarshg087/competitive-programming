#include <iostream>
#include <vector>
using namespace std;

int elementFrequency(int arr[], int n)
{
    int max_freq;
    int count = 1;
    int count_max = 0;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > count_max)
        {
            count_max = count;
            max_freq = arr[i];
        }
        arr[i] = 0;
    }

    return count_max;
}

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

        int count_max = elementFrequency(arr, n);
        int ans = n - count_max;
        cout << ans << endl;
    }
    return 0;
}