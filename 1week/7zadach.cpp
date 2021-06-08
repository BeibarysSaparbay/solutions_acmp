#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main(){
	string a,b,c;
	cin>>a>>b>>c;
	int x,y,z;
	if(a.size() > b.size() and a.size() > c.size()){
		cout<<a;
	}
	
	else if(b.size() > a.size() and b.size() > c.size()){
		cout<<b;
	}	
	
	else if(c.size() > b.size() and a.size() < c.size()){
		cout<<c;
	}
	else if(a.size() == b.size() and a.size() > c.size()){
		x = stoi(a);
		y = stoi(b);
		cout<<max(a,b);
	}  
	
	else if(c.size() == b.size() and a.size() < c.size()){
		c = stoi(c);
		b = stoi(b);
		cout<<max(c,b);
	}  
	
	else if(a.size() == c.size() and b.size() < c.size()){
		a = stoi(a);
		c = stoi(c);
		cout<<max(a,c);
	}  
	else if(a.size() == b.size() and b.size() == c.size()){
		a = stoi(a);
		b = stoi(b);
		c = stoi(c);
		cout<<max(a,max(b,c));
	}
	
	return 0;
}
