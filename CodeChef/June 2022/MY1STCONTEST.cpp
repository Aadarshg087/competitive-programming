/* In a contest where NN new users visited the contest,

AA users just saw the problems and didn’t make any submissions and hence won’t get any rating.
BB users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 800 - 1000800−1000.
Everyone else could correctly solve at least 11 problem. Thus, they will get a rating strictly greater than 10001000 after the contest.
You need to output the number of new users in the contest who, after the contest, will get a rating and also the number of new users who will get a rating strictly greater than 10001000. */
#include<iostream>
using namespace std;

int main(){
    int a,b,n;
    cin>>n>>a>>b;
    cout<<n-a<<" ";
cout<<(n-a)-b<<endl;
    return 0;
}