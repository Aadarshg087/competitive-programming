/* Chef's computer has N GB of free space. He wants to save X files, each of size 1 GB and Y files, each of size 2 GB on his computer. Will he be able to do so?

Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int x, y;
        cin>>x>>y;
        int X=x*1;
        int Y=y*2;
        if (X+Y<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;   
    }
    
    return 0;
}