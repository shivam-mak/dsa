#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   // Base Condition.
   if(n <= 1)
   return n;
   // Problem broken down into 2 parts and then combined.
  int last= func(n-1);
  int slast=func(n-2);
  return last+slast;

}

int main(){
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
  
  // Here, let’s take the value of n to be 3.
  int n;
  cin>>n;
 cout<<func(n);
  return 0;

}