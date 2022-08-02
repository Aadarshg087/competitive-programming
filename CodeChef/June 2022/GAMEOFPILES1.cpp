#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for (int i = 1; i <= N; i++)
        {
            cin>>arr[i];
        }
        for (int i = 1; i <= N; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
        
    }
    
    return 0;
}