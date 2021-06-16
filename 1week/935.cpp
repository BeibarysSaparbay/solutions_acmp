#include <cmath>
#include <iostream> 

using namespace std; 
int main(){
unsigned long long a,b,c; 
cin>>a>>b; 
c=a*b; 
for(unsigned long long i=0;i<=c;i++){ 
	if (i*i==c){
		cout<<i; 
		break;
		}
 	if (i*i>c){
 		cout<<0; 
 		break;
		} 
	}
}
