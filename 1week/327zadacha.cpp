#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int n,z;
	cin>>n;
	int n1, n2, n3, n4, n5, n6;
	int x[n];
	int y[n];
	int sum1 , sum2 ;
	for(int i=0;i<n;i++){
		cin>>z;
		sum1 = 0;
		sum2 = 0;
		n1 = z / 100000;
		n2 = (z / 10000) % 10 ;
		n3 = (z / 1000) % 10 ;
		sum1 = n1+n2+n3;
		x[i] = sum1;
		n4 = (z / 100) % 10 ;
		n5 = (z / 10) % 10 ;
		n6 =  z % 10;   
		sum2 = n4 + n5 + n6;
		y[i] = sum2;
	}
	for(int i=0;i<n;i++){
		if(abs(x[i] - y[i]) == 1){
			if(x[i+1] == y[i+1] or x[i-1] == y[i-1]){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
