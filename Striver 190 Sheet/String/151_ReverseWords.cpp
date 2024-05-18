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
// s = " the   sky is blue   ";

// Basic Approach -----------------------------
/*
- First I clean up the string from the side spaces and extra spaces in between
- Then I traversed from the back and reversed each string added it to the res string
- Took care of the excpetion of the last string separately
- returned the res string
- T.C - O(N) + O(N * n) + O(n)
- S.C - O(N)

*/
string reverseWords(string s)
{
    bool spaces = 0;
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && spaces)
        {
            ans += s[i];
            spaces = 0;
        }
        else if (s[i] != ' ')
        {
            ans += s[i];
            spaces = 1;
        }
    }
    if (ans[ans.size() - 1] == ' ')
    {
        ans.pop_back();
    }

    string temp = "";
    string res = "";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (ans[i] == ' ')
        {
            reverse(temp.begin(), temp.end());
            res += temp;
            res += " ";
            temp = "";
        }
        else
        {
            temp += ans[i];
        }
    }
    reverse(temp.begin(), temp.end());
    res += temp;
    /*
    string temp = "";
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == ' '){
            res = temp + " " + res;
            temp = "";
        }
        else{
            temp += ans[i];
        }
    }
    */
    return res;
}

// Another Approach ------------------------------
/*
- using the string Stream function in c++ which will give the words in tokens


*/
string reverseWords(string s)
{
    stringstream ss(s);
    string token = "";
    string res = "";
    while (ss >> token)
    {
        res = token + " " + res;
    }
    res.pop_back();
    return res;
}

// Better Appraoch ----------------------------------
/*
- Reverse the whole string in the first step
- then, reverse every single words one by and take case of the spaces along the way
*/
string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    bool spaces = 0;
    int n = s.size();
    string res = "";
    string temp = "";
    for (int i = 0; i < n + 1; i++)
    {
        if (i == n || (s[i] == ' ' && spaces))
        {
            reverse(temp.begin(), temp.end());
            res += temp + " ";
            temp = "";
            spaces = 0;
        }
        else if (s[i] != ' ')
        {
            temp += s[i];
            spaces = 1;
        }
    }
    res.pop_back();
    return res;
}

// Best Approach -----------------------------
/*
- Two Pointer Approach after reversing the string initially

*/

void rev(string &s, int l, int r)
{
    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int l = 0;
    int r = 0;
    int i = 0;
    int n = s.size();
    while (i < n)
    {
        if (s[i] == ' ')
        {
            rev(s, l, r);
            r += 2;
        }
        else
        {
            s[r] = s[i];
            r++;
        }
        i++;
    }
}

int main()
{

    return 0;
}