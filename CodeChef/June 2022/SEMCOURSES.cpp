/* This semester, Chef took XX courses. Each course has YY units and each unit has ZZ chapters in it.

Find the total number of chapters Chef has to study this semester. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        cout<<x*y*z<<endl;
    }
    return 0;
}