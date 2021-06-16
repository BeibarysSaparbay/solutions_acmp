#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double n;
	cin >> n;
	int cnt ;
	double sum = 0.0;
	bool ok = false;
	int r = 1;
	
	while(ok != true){
		double s = 1 / r;
		r ++ ; 
		sum += 	s;
		if(sum > n){
			ok = true;
		}
		cnt ++;
	}
	cout<<cnt;

	return 0;
}
