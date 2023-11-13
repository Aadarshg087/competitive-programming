#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void upDownTraversal(int **arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
}

void rightLeftSnake(int **arr, int n)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        while (j < n && j >= 0)
        {
            cout << arr[i][j] << " ";
            if ((i & 1) == 0)
                j++;
            else
                j--;
        }
        if (j < 0)
            j = 0;
        else
            j -= 1;
        i++;
    }
}
void upDownSnake(int **arr, int n)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        while (j < n && j >= 0)
        {
            cout << arr[j][i] << " ";
            if ((i & 1) == 0)
                j++;
            else
                j--;
        }
        if (j < 0)
            j = 0;
        else
            j -= 1;
        i++;
    }
}

void solve()
{

    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 0;
    //     }
    // }

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the basic array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Basic Up Down Traversal: ";
    upDownTraversal(arr, n);

    cout << "Up Down Snake Traversal: ";
    upDownSnake(arr, n);

    cout << "Right Left Snake: ";
    rightLeftSnake(arr, n);
}

int main()
{
    solve();
    return 0;
}