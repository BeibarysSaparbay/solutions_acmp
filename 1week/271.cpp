#include<iostream>
using namespace std;
int fib(int n){
	int a = 1, b = 1 , c ;
	int cnt = 2;
	while(n>c){
		c = a + b;
		a = b;
		b = c;
		cnt ++;
	}
	if(n == c){
		return cnt;
	}
	else{
		return 0;
	}
	
}
int main(){
	int n;
	cin>>n;
	int x = fib(n);
	if(x == 0 ){
		cout<<0;
	}
	else{
		cout<<1<<endl<<x;
	}
	
	return 0;
}
