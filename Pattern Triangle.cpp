         //              1 
       //              2 3 2
     //              3 4 5 4 3
   //              4 5 6 7 6 5 4
   //n=4;
   //comstraints (0 < N < 10)
#include<iostream>
using namespace std;
int main() {
	int rowno=1;
	int tr;
	cin>>tr;
	while(rowno<=tr){
		//===spaces==
		int j=1;
		while(j<=tr-rowno){
			cout<<" "<<"\t";
			j=j+1;
		}
		//=====stars==
		int i=1;
		//=increase=
		int sno=rowno;
		while(i<=rowno){
			cout<<sno<<"\t";
			sno=sno+1;
			i=i+1;
		}
		//===decrese==
		sno=sno-2;
		int k=1;
		while(k<=rowno-1){
			cout<<sno<<"\t";
			sno=sno-1;
			k=k+1;
		}
		cout<<endl;
		rowno=rowno+1;

	}

	return 0;
}
