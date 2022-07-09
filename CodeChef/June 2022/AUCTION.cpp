/* Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A, B, and C are distinct).

According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a>b)
        {
            if (a>c)
            {
                cout<<"Alice"<<endl;
            }
            else
                cout<<"Charlie"<<endl;
        }
        else if (b>c)
        {
            cout<<"Bob"<<endl;
        }
        else
            cout<<"Charlie"<<endl; 
    }
    
    return 0;
}