/* Chef and his girlfriend go on a date. Chef took XX dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of YY dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int money, bill;
        cin>>money>>bill;
        if (money>=bill)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        
    }
    
    return 0;
}