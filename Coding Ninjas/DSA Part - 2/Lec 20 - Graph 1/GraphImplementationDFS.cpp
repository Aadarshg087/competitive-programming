#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int **edges, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
}

void print(int **edges, int n, int sv, bool *visited)
{
    cout << edges[sv] << " ";
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
            continue;

        if (edges[sv][i] == 1)
        {
            if (visited[i] == true)
                continue;
            print(edges, n, i, visited);
        }
    }
}

int main()
{
    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    cout << "Printing the empty array: " << endl;
    printArray(edges, n);

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    print(edges, n, 0, visited);

    return 0;
}