#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if(n ==0){
		cout<<"Impossible";
	}
	int mn = n + k - min(n,k);
	int mx = n + k - 1;
	cout<<mn<<" "<<mx;
	return 0;
}
