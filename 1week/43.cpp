#include<iostream>
using namespace std;
int main(){
	string x;
	cin>>x;
	int sum = 0;
	bool ok = false;
	int mn = 0;
	for(int i=0;i<x.size();i++){
		if(x[i] == '0'){
			sum ++;
		}
		else if(x[i] == '1'){
			if(mn < sum){
				mn = sum;
			}
			sum = 0;
		}	
	}
	if(sum > mn){
		mn = sum;
	}
	
	cout<<mn;
	
	return 0;
}
