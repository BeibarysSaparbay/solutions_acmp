#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int mx = 0,ind;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] > mx){
			mx = a[i];
			ind = i;
		}
	}
	int cnt = 1;
	for(int i=0;i<n;i++){
		if(a[i] == mx){
			cnt++;
		}
	}
	if(cnt == 2){
		cout<<ind;
	}
	else{
		cout<<0;
	}
	return 0;
}
