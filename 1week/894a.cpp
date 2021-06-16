#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
double S, SR, Sr, R, r;
double Pi = 3.14; 
cin >> S >> R; 
SR = Pi * R * R; 
Sr= SR - S; 
r=sqrt(Sr/Pi); 
cout<<r; 
return 0; 
}
