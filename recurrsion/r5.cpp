#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }

   // Problem broken down into 2 parts and then combined.
   return n * func(n-1);

}

int main(){
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
  
  // Here, let’s take the value of n to be 3.
  int n;
  cin>>n;
  cout<<func(n)<<endl;
  return 0;

}