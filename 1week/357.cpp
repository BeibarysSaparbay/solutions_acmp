#include<iostream>
#include<cmath>

using namespace std;
int main(){
	string s;
	cin>>s;
	int sum = 0;
	for(int i=0;i<s.size();i++){
		int x;
		x = s[i] - '0';
		sum += x * pow(-1,i);
	}
	if(sum % 11 == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
