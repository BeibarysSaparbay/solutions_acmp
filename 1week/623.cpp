#include<iostream>

using namespace std;

int n;
int fibrec(int n){
	if(n<=1)
		return n;
	else{
		return fibrec(n-1) + fibrec(n-2); 
	}
}
int main(){
	cin>>n;
	cout<<fibrec(n + 1) % 10;
	return 0;
}
