#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += min(a[i] , k);
	}
	cout<<sum;
	
	
	return 0;
}
