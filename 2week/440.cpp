#include<iostream>
using namespace std;
int main(){
	int x,y;
	int cnt = 0;
	int cnt0 = 0,cnt25 = 0,cnt50 = 0,cnt75 = 0,cnt100 = 0;

	for(int i=0;i<5;i++){
		cin>>x>>y;
		if((x == 0 and y == 0) and cnt0 == 0){
			cnt ++;
			cnt0 ++;
		}		
		if((x == 25 and y == 0) and cnt25 == 0){
			cnt ++;
			cnt25 ++;
		}		
		if((x == 50 and y == 0) and cnt50 == 0){
			cnt ++;
			cnt50++;
		}		
		if((x == 75 and y == 0) and cnt75 == 0){
			cnt ++;
			cnt75++;
		}		
		if((x == 100 and y == 0) and cnt100 == 0){
			cnt ++;
			cnt100 ++;
		}		
	}
	cout<<cnt;
	return 0;
}
