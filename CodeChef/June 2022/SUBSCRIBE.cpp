/* Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly XX minutes.

The meeting platform supports a meeting of maximum 3030 minutes without subscription and a meeting of unlimited duration with subscription.

Determine whether Chef needs to take a subscription or not for setting up the meet. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        // x--> Minutes needed for meeting
        int x;
        cin>>x;
        if (x<=30)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }
    
    return 0;
}