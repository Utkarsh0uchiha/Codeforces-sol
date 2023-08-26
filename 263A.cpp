    #include <iostream>
     
    using namespace std;
     
    int main()
    { 
        int arr[5][5];
        for(int i = 0; i < 5 ; i++){
            for(int j = 0; j < 5; j++){
                cin>>arr[i][j];
                
            }
            
        }
        int r = 0,c = 0;
        for(int i = 0; i < 5 ; i++){
            for(int j = 0; j < 5; j++){
                if(arr[i][j] == 1){
                    r = j;
                    c = i;
                    break;
                }
                
            }
            
            
        }
        if(r == 2 && c == 2) cout<<0;
        else if(r == 2) cout<<abs(c - 2);
        else if(c == 2) cout<<abs(r - 2);
        else cout<<abs(c - 2) + abs(r - 2);
        return 0;
    }
