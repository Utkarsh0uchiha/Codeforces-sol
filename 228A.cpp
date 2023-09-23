#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin>>arr[i];
    }
    int count = 0;
    sort(arr, arr + 4);
    for(int i = 0; i < 4; i++){
        if(arr[i] != arr[i + 1]){
            count++;
        }
    }
    cout<<(4 - count);
    return 0;
}
