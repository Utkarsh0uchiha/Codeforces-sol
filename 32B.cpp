    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s,s2;
        cin>>s;
        int len = s.length();
        for(int i = 0; i<len; i++){
            if(s[i] == '.'){
                cout<<0;
            }
            else if(s[i] == '-' && s[i + 1] == '.'){
                cout<<1;
                ++i;
            }
            else if(s[i] == '-' && s[i + 1] == '-'){
                cout<<2;
                ++i;
            }
        }
     
        return 0;
    }
