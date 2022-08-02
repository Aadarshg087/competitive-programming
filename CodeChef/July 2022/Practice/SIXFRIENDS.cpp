#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
    int x,y;
    cin>>x>>y;
    int X=(x)*6/2;
    int Y=(y)*6/3;
    if (X>Y)
    {
        cout<<Y<<endl;
    }
    else
        cout<<X<<endl;
    
}
    return 0;
}