#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> ourmap;

    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // find or access
    cout << ourmap["def"] << endl;
    cout << ourmap.at("abc") << endl;

    // cout << ourmap.at("ghi") << endl;
    // it will throw error since the key doesn not exist

    cout << ourmap["ghi"] << endl;
    // it will create the key if there is not one with value 0

    cout << ourmap.count("ghi") << endl;
    // 0 -> not present  1 -> key is present

    cout << ourmap.size() << endl;
    // prints the total number of keys

    ourmap.erase("ghi");

    return 0;
}