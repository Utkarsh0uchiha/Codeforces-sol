 
#include <bits/stdc++.h>
#include <string>
 
using namespace std;
int main(){
    string s;
    cin>>s;
    string v;
    cin>>v;
    for(size_t i = 0; i <= s.size(); ++i ){
        if(s[i] == v[i]){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
    }
    cout<<s;
}
