#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int k,n;
	cin>>k>>n;
	k %= 10;
	
//	int r = n % 4;
	int r;
	if(n % 4 == 0){
		r = 4;
	}
	else{
		r = n % 4;
	}
	
	int res = pow(k,r);
	res %= 10;
	cout<<res;
	
	return 0;
}
