/*There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points.

Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.

Given the total score P of the participant, determine the number of problems solved by the participant. Print −1 in case the score is invalid.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int score;
	    cin>>score;
	    int p;
	    
	    if(score < 100 || score==0){
	        if (score > 10) p=-1;
	       else p = score;
	    } 
	    
	    else if (score >= 100 && score <= 1000) {
	        p = score/100; // 10     
	        int k = score - (p*100);   //  k=0
	        if(k>=0 && k<=(10-p)) p+=k;
	        else p = -1;
	    } 
	    
	    else p = -1;
	    
	    if(p>=0 && p<=10)
	        cout<<p<<endl;
	    else 
	        cout<<"-1"<<endl;
	}
	return 0;
}
