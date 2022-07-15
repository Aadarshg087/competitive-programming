/* There are only 2 type of denominations in Chefland:

Coins worth 1 rupee each
Notes worth 10 rupees each

Chef wants to pay his friend exactly XX rupees. What is the minimum number of coins Chef needs to pay exactly X rupees? */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int coins=1;
        int rupees=10;
        int x;
        cin>>x;
        int min_Coins= x%rupees;
        cout<<min_Coins<<endl;
    }
    return 0;
}