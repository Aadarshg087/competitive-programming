/* Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.

Charlie measured the heights of Alice and Bob, and got to know that Alice's height is XX centimeters and Bob's height is YY centimeters. Help Charlie decide who is taller.

It is guaranteed that X \neq YX=Y. */


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a_x,b_y;
        cin>>a_x>>b_y;
        if (a_x>b_y)
        {
            cout<<"A"<<endl;
        }
        else   
            cout<<"B"<<endl;
        
    }
    return 0;
}