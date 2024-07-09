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

// Approach
/*
- Created a function to get the all strings between '.' in a vector
- Compared the values, if equal keep checking.
- When both the indexes are exhasted, that means everything is equal return 0;
- otherwise it will return somthing according to the conditoin
T.C - O(n)
S.C - O(2*n)

*/
vector<string> getTokens(string s)
{
    vector<string> ans;
    stringstream ss(s);
    string temp = "";
    while (getline(ss, temp, '.'))
    {
        ans.push_back(temp);
    }
    return ans;
}
int compareVersion(string version1, string version2)
{
    // v1 > v2 ? 1 : -1;
    // v1 == v2 ? 0;
    vector<string> v1 = getTokens(version1);
    vector<string> v2 = getTokens(version2);
    int m = v1.size();
    int n = v2.size();

    int i = 0;
    int j = 0;
    int maxSize = max(n, m);
    while (1)
    {
        int num1 = (i < m) ? stoi(v1[i++]) : 0;
        int num2 = (j < n) ? stoi(v2[j++]) : 0;
        if (num1 != num2)
        {
            int ans = (num1 > num2) ? 1 : -1;
            return ans;
        }
        if (i >= maxSize || j >= maxSize)
            return 0;
    }
    return 0;
}

int main()
{

    return 0;
}