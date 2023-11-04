#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printDFS(int **edges, int n, int sv, bool *visited)
{
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (edges[sv][i] == 1 && !visited[i])
        {
            // if (visited[i])
            //     continue;
            printDFS(edges, n, i, visited);
        }
    }
}

int main()
{
    int e, n;
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

    int f, s;
    for (int i = 0; i < e; i++)
    {
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    printDFS(edges, n, 0, visited);

    delete[] visited;

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete edges;

    return 0;
}