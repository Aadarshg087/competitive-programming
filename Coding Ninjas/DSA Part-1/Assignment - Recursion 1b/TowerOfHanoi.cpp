#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        cout << source << " " << destination << endl;
        return;
    }
    char helper = 'a' ^ 'b' ^ 'c' ^ source ^ destination;
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << source << " " << destination << endl;
    return towerOfHanoi(n - 1, helper, source, destination);
}
int main()
{
    int n;
    cin >> n;
    char source = 'a';
    char auxiliary = 'b';
    char destination = 'c';
    towerOfHanoi(n, source, auxiliary, destination);
    return 0;
}