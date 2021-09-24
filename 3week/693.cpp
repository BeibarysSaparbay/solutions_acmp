#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<char> v1,v2;
    for(int i=0;i<s1.size();i++){
        s1[i] = toupper(s1[i]);
        v1.push_back(s1[i]);
    }
    
    for(int i=0;i<s2.size();i++){
        s2[i] = toupper(s2[i]); 
        v2.push_back(s2[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1.size() != v2.size()){
        cout<<"No"<<endl;
    }
    else{
        bool ok = true;
        for(int i=0;i<v1.size();i++){
            if(v1[i] != v2[i]){
                ok = false;
            }
        }
        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}