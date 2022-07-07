/* Chef appeared for a placement test.

There is a problem worth XX points. Chef finds out that the problem has exactly 1010 test cases. It is known that each test case is worth the same number of points.

Chef passes NN test cases among them. Determine the score Chef will get.

NOTE: See sample explanation for more clarity. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x, n;
        cin>>x>>n;
        int per_case=x/10;
        int res=n*per_case;
        cout<<res<<endl;
    }
    
    return 0;
}