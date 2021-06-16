#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		bool n1 = false,n5 = false, n6 = false,n2 = false, n3 = false,n4 = false;
		if(x.size() != 6){
			cout<<"No";
		}
		if(x[0] == 'A' or x[0] == 'B' or x[0] == 'C' or x[0] == 'E' or x[0] == 'H' or x[0] == 'K' or x[0] == 'M' or x[0] == 'O' or x[0] == 'P' or x[0] == 'T' or x[0] == 'X' or x[0] == 'Y') {
			n1 = true;
		}
		if(x[4] == 'A' or x[4] == 'B' or x[4] == 'C' or x[4] == 'E' or x[4] == 'H' or x[4] == 'K' or x[4] == 'M' or x[4] == 'O' or x[4] == 'P' or x[4] == 'T' or x[4] == 'X' or x[4] == 'Y') {
			n5 = true;
		}
		if(x[5] == 'A' or x[5] == 'B' or x[5] == 'C' or x[5] == 'E' or x[5] == 'H' or x[5] == 'K' or x[5] == 'M' or x[5] == 'O' or x[5] == 'P' or x[5] == 'T' or x[5] == 'X' or x[5] == 'Y') {
			n6 = true;
		}
		if(x[1] >= '0' and x[1] <= '9'){
			n2 = true;
		}
		
		if(x[2] >= '0' and x[2] <= '9'){
			n3 = true;
		}
		if(x[3] >= '0' and x[3] <= '9'){
			n4 = true;
		}
		if(n1 == true and n2 == true and n3 == true and n4 == true and n5 == true and n6 == true){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
				
	}
	return 0;
}
//A, B, C, E, H, K, M, O, P, T, X, Y.
