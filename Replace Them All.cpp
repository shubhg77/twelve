//replace them all zeros to five//

#include<iostream>
using namespace std;
int main() {	
	 long long int n;
	cin>>n;

	if(n==0){
      cout<<5;
	  return 0;
	}
	else{
	long long int rev=0;
	while(n>0){
	long long int n1 = n%10;
	if(n1==0){
		n1=5;
	}
	else{
		n1=n1;
	}
	rev=rev*10 + n1;
	n=n/10;
	}
	// cout<<rev;
	//reverse again=====
	long long int n2=rev;
	// cin>>n;
	long long int rem=0;
	while(n2>0){
	long long int p= n2%10;
	rem=rem*10 + p;
	n2=n2/10;
	}
	cout<<rem;
	}
	
	return 0;
} 
