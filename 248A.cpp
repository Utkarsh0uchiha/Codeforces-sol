#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n*2];
    
    for(int i = 0; i< n *2; i++){
        cin>>arr[i];
    }
    int left0s = 0,rigth0s = 0,left1s = 0, right1s = 0;
    
    for(int i = 0; i<n*2; i+=2){
        if(arr[i] == 0) left0s++;
        else left1s++;
    }
    
    for(int i = 1; i<n*2; i+=2){
        if(arr[i] == 0) rigth0s++;
        else right1s++;
    }
    
    int ans = 0;
    if(left1s > left0s) ans += left0s;
    else ans += left1s;
    if(right1s > rigth0s) ans += rigth0s;
    else ans += right1s;
    cout<<ans;
    return 0;
}
