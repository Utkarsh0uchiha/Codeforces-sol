 
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a,b;
    int stillnow = 0;
    int capacity = 0;
    for(int i = 1; i <=n; i++){
        cin>>a>>b;
        stillnow -= a;
        stillnow += b;
        capacity = max(stillnow, capacity);
    }
    cout<<capacity;
    
    return 0;
}
