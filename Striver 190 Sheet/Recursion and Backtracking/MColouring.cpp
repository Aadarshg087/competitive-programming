#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

/*
APPROACH
- We are using the backtracking and core of the problem is the safe function, we are simply checking the color of the
- adjacent nodes and if we find any one case of similar colours, we are returning false
- Then, if recieved false in the solve function, we will try for the next color till m (for loop) otherwise move on to next - - node.
- If for loops exhaust all the way, that means it is not able to colour it with M colours, so it will return false
- T.C - O(N^M) because at every node N, we will try M colours or M calls (at max)
- S.C - O(N) + O(N) -> one is for colour array, and other is for recursion calls maybe
*/

/*
- Make sure to take a note of the main function

*/

bool isSafe(bool graph[101][101], vector<int> &color, int n, int currNode, int currColor)
{
    for (int i = 0; i < n; i++)
    {
        // whether there exists a adjacent node that contains the same color
        if (currNode != i && graph[currNode][i] == 1 && color[i] == currColor)
            return false;
    }
    return 1;
}

bool solve(bool graph[101][101], vector<int> &color, int m, int n, int currNode)
{
    // Base case
    if (currNode == n)
    {
        return 1;
    }

    // Recurrence Relation
    for (int i = 1; i <= m; i++)
    {
        if (isSafe(graph, color, n, currNode, i))
        {
            color[currNode] = i;
            if (solve(graph, color, m, n, currNode + 1))
                return 1;
            else
                color[currNode] = 0;
        }
    }
    return 0;
}

bool graphColoring(bool graph[101][101], int m, int n)
{
    vector<int> color(n, 0);
    int currNode = 0;
    if (solve(graph, color, m, n, currNode))
        return 1;
    return 0;
}

// Solving it one more time for the Coding Ninjas ----------------------------------------------------------------

bool isSafe(vector<vector<int>> &mat, int n, vector<int> &color, int currNode, int currColor)
{
    for (int i = 1; i < n; i++)
    {
        if (currNode != i && mat[i][currNode] == 1 && color[i] == currColor)
            return false;
    }
    return 1;
}

bool solve(vector<vector<int>> &mat, int n, int m, vector<int> &color, int currNode)
{
    // Base case
    if (currNode == n)
    {
        return true;
    }

    // Recurrence Relation
    for (int i = 1; i <= m; i++)
    {
        if (isSafe(mat, n, color, currNode, i))
        {
            color[currNode] = i;
            if (solve(mat, n, m, color, currNode + 1))
                return 1;
            else
                color[currNode] = 0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m)
{
    // Write your code here
    int n = mat.size();
    vector<int> color(n, 0);
    int currNode = 1;
    if (solve(mat, n, m, color, currNode))
        return "YES";
    return "NO";
}
int main()
{

    return 0;
}