#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n,m;
   cin>>n>>m;
   int counter = 0;
   int flag = 0;
   for(int p = n + 1; p <= m; p++){
       counter = 0;
       for(int i = 2; i <= (p/2)+ 1; i++){
           if(p % i == 0) counter++;
       }
       if(counter == 0){
           if(p==m){
               cout<<"YES";
               flag = 1;
               break;
           }
           else{
               cout<<"NO";
               flag = 1;
               break;
           }
       }
       
   }
   if(!flag){
       cout<<"NO";
   }
   return 0;
}
