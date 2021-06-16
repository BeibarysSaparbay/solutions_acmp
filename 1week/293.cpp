#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int a[n];
	int b[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	
	for(int i=0;i<n;i++){
		cin>>b[i];	
	}
	int ind;
	int mn = 0;
	for(int i=0;i<n;i++){
		int mx;
		mx = a[i] * b[i];
		if(mn < mx){
			mn = mx;
			ind = i;
		}
	}
	
	cout<<ind+1;
	
	return 0;
}
