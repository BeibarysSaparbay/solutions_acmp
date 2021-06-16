#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	int r1 = n[0] - '0';
	int r2 = n[1] - '0';
	int l1 = n[3] - '0';
	int l2 = n[4] - '0';
	bool ok = false;
	while(ok != true ){
		l2 ++;
		if(l2 > 9){
			l2 %= 10;
			l1 ++;
		}
		if(l1 > 5){
			r2 ++;
			l1 %= 6;
		}
		if(r2 > 9){
			r1 ++;
			r2 %= 10;
		}
		if( (r1 * 10) + r2 > 23){
			r1 %= 2;
			r2 %= 4;
		}
		
		
		
		if(r1 == l2 and r2 == l1){
			ok = true;
		}
	}
	
	cout<<r1<<r2<<":"<<l1<<l2;
	return 0;
}
