#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target){
    int l = 0; 
    int r = numbers.size() - 1;
    while(l<r){
        int x = numbers[l] + numbers[r];
        if(x==target){
            return {l + 1, r + 1};
        }
        if(x>target)
            r--;
        else
            l++;
    }
    return {0,0};
}

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int i = 0;
    int j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        if (numbers[i] + numbers[j] == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            break;
        }
        if (numbers[i] + numbers[j] > target)
        {
            j--;
        }
        else
            i++;
    }
    return ans;
}

int main()
{

    return 0;
}