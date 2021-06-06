#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int mx, mn;
	if(a % 2 == 1 and b % 2 == 1){
		mx = max(a,b);
	}
	else if(a%2 == 1 and b % 2 != 1){
		mx = max(a ,b / 2);
	}
	
	else if(a%2 != 1 and b % 2 == 1){
		mx = max(b ,a / 2);
	}
	
	return 0;
}
