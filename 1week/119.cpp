#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	int res;
	int a,b,c;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		res = c + (60 * b) + (a * 3600);
		ar[i] = res;
	}
	sort(ar,ar + n);
	for(int i=0;i<n;i++){
		cout<<ar[i] / 3600 <<" " <<(ar[i] % 3600)  / 60 <<" "<<ar[i] % 60<<endl; 
	}
	return 0;
}
