/*You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.

Chef knows that:

A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.
Using the string S, determine the sequence of the complementary strand of the DNA.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char s[n]={};
	    
	    
	    for(int i=0; i<n; i++){
	        cin>>s[i];
	    }
	    
	    for(int j=0; j<n; j++){
	        if(s[j]=='A' || s[j]=='a') s[j]='T'; 
	        else if(s[j]=='T' || s[j]=='t') s[j]='A';
	        else if(s[j]=='C' || s[j]=='c') s[j]='G';
	        else if(s[j]=='G'|| s[j]=='g') s[j]='C';
	    }
	    
	    for(int i=0; i<n; i++){
	        cout<<s[i];   
	    }
	    cout<<endl;
	}
	return 0;
}
