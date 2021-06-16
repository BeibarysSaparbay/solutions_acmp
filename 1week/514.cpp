#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p = 1;
	int res = 0;
	while(n!=0){
		int r = 0;
		while(r != p ){
			if(n == 0){
				break;
			}
			if(r > res){
				res = r;
			}
			r ++;
			n -- ;
		}
		p ++;
	}
	
	cout<<res;
	
	return 0;
}
