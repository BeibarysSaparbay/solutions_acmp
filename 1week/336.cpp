#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
int main(){
	string s;
	cin>>s;
	int x = 0;
	vector<int> v;
	v.push_back(x);
	for(int i=0;i<s.size();i++){
		if(s[i] == '1'){
			x ++;
		}
		if(s[i] == '2'){
			x --;
		}
		v.push_back(x);
	}
	
	set<int> my_s;
	for(int i=0;i<v.size();i++){
		my_s.insert(v[i]);
	}
	cout<<my_s.size() - 1;
	
	return 0;
}
