#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int A;
        int B;
        cin>>A>>B;
        int count=0;
        int count1=0;
        for (int i = 1; i <= min(A,B); i++)
        {
            if (i%2==0)
            {
                count++;
            }
            else
                count1++;  
        }
        cout<<max(A,B);
    }
    
    return 0;
}