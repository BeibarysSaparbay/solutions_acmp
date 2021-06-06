#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	int res = 0,ind = - 1;
	for(int i=0;i<n;i++){
		cin>>x>>y;
	if(y == 1 and x > res){
		ind = i;
		res = x;
		}	
	}
	if(ind == - 1){
		cout<<ind;
	}
	else{
		cout<<ind+1;
	}
	return 0;
}
