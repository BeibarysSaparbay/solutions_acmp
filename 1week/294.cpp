#include<iostream>
using namespace std;
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int m,r,s;
	cin>>s>>m>>r;
	int sum = 0;
	sum += (n * x)/100 * y;
	sum += (s * m)/100 * r; 
	
	int s1 = 0;
	int s2 = 0;
	s1 = n * (100 - x) / 100 ;
	s2 = s * (100 - m) / 100;
	if(s1<s2){
		sum += r * (s2 - s1);
	}
	else{
		sum += y *(s1 - s2);
		}
	cout<<sum;
	
	return 0;
}
