#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k,r;
	cin>>n>>k>>r;
	int n1 = abs(k - r) -1;
	int n2 = n - r + k -1;
	int n3 = n - k + r -1;
	cout<<min(n3,min(n1,n2));

	
	return 0;
}
