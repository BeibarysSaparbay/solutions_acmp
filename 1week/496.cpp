#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int mn = 0;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		int sum = 0;
		if(i ==0){
			sum += a[i] + a[i+1] + a[n-1];
		}
		else if(i == n - 1){
			sum += a[i] + a[i-1] + a[0]; 
		}
		else{
			sum += a[i] + a[i+1] + a[i-1];
		}
		
		if(sum > mn){
			mn = sum;
		}
	}
	
	cout<<mn;
	
	return 0;
}
