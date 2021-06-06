#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	string team;
	string name;
	getline(cin,team);
	string a[3];
	for(int i=0;i<3;i++){
		cin>>name;
		a[i] = name;
	}
	sort(a, a+3);
	cout<<team<<": ";
	for(int i=0;i<2;i++){
		cout<<a[i]<<", ";
	}
	cout<<a[2];
	return 0;
}
