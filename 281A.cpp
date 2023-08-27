#include <bits/stdc++.h>
#include <cstring>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    if(s[0] >= 61 ){
        s[0] = toupper(s[0]);
    }
    cout<<s<<endl;
    return 0;
}
