/*
    To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.

    Skeleton code to achieve this:
    #include <iostream>
    using namespace std;

    void quickSort(int input[], int start, int end)
    {
            // your code goes here
    }
    void quickSort(int input[], int size)
    {
            quickSort(input, 0, size - 1);
    }

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void quickSort(int input[], int size)
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Change in the given array itself.
       Taking input and printing output is handled automatically.
    */
    if (size == 0 || size == 1)
        return;

    int counter = 0;
    for (int i = 1; i < size; i++)
        if (input[i] < input[0])
            counter++;
    int temp = input[counter];
    input[counter] = input[0];
    input[0] = temp;

    int i = 0, j = size - 1;
    while (i < counter && j > counter)
    {
        if (input[i] < input[counter])
            i++;
        else if (input[j] >= input[counter])
            j--;
        else
        {
            int temp1 = input[i];
            input[i] = input[j];
            input[j] = temp1;
            i++;
            j--;
        }
    }
    quickSort(input, counter);
    quickSort(input + counter + 1, size - 1 - counter);
}

int main()
{
    int size;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    quickSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    return 0;
}