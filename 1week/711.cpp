#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int mn= 10000000;
	string res;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		int sum = 0;
		for(int j=0;j<k;j++){
			int r;
			cin>>r;
			sum += r;
		}
		if(sum < mn){
			mn = sum;
			res = x;
		}
	}
	cout<<res;
	return 0;
}
