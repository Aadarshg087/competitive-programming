#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int **edges, int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int v;
    cin >> v;

    int **edges = new int *[v];
    for (int i = 0; i < v; i++)
    {
        edges[i] = new int[v];
    }

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            edges[i][j] = 0;
        }
    }

    print(edges, v);

    cout << "Enter the number of edges: ";
    int edge;
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        int first, second;
        cin >> first >> second;
        edges[first][second] = 1;
        edges[second][first] = 1;
    }

    print(edges, v);

    int *visited = new int[v];

    return 0;
}