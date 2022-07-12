/* Chef has his lunch only between 11 pm and 44 pm (both inclusive).

Given that the current time is XX pm, find out whether it is lunchtime for Chef. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        if (x<=4 && x>=1)
        {
            cout<<"Yes"<<endl;
        }
        else  
            cout<<"No"<<endl;   
    }
    return 0;
}