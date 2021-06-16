#include<iostream>
using namespace std;
int main(){
	
	string s;
	cin>>s;
	int cnt = 0;
	for(int i=0;i<s.size() - 5;i++){
		if(s[i] == '>' and s[i+1] == '>' and s[i+2] == '-' and s[i+3] == '-' and s[i+4] == '>' ){
			cnt ++;
		}
	}
	for(int i=s.size() - 1;i > 3;i--){
		if(s[i] == '<' and s[i-1] == '<' and s[i-2] == '-' and s[i-3] == '-' and s[i-4] == '<'){
			cnt ++;
		}
	}
	cout<<cnt;
	return 0;
}
