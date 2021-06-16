#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	string e = "2.7182818284590452353602875";
	 
	if(n == 0){
		cout<<3;
	}
	else{
		for(int i=0;i<n+2;i++){
		cout<<e[i];			
		}
	}
	return 0;
}
