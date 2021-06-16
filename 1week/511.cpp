#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int res;
	int x = (n-1) * 10;
	if(x / 2 >= 720){
		cout<<"NO";
	}
	else{
		if(n == 1){
			cout<<0<<" "<<0;
		}
		else if(n % 2 ==0){
			res = x / 2;
			cout<<res / 60 <<" "<<res%60;
		
		}
		else{
			res = (x / 2) - 5;
			cout<<res / 60 <<" "<<res%60;
			}
		}
	return 0;
}
