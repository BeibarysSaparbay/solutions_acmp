#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt = 0;
	int sum = 0;
	int k = 1;
	while(n != sum){
		sum += k;
		cnt ++;
		k ++;
	}
	cout<<cnt;
	return 0;
}
