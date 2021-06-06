#include<iostream>
using namespace std;
int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int a[n][m];
	int s = 0;
	for(int i=0;i<n;i++){
		if(i % 2 == 0){
		for(int j=0;j<m;j++){
			a[i][j] = s;
			s++; 
			}
		}
		else{
			for(int j=m-1;j>=0;j--){
				a[i][j] = s;
				s++;
			}
		}
	}

cout<<a[x-1][y-1];

	return 0;
}
