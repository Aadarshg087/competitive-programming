/* Harsh was recently gifted a book consisting of NN pages. Each page contains exactly MM words printed on it. As he was bored, he decided to count the number of words in the book.

Help Harsh find the total number of words in the book. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<m*n<<endl;
    }
    
    return 0;
}