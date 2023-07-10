#include<bits/stdc++.h>
using namespace std;
bool f(int i, string &s){
if(i>=s.size()/2) return true;
if(s[i]!=s.size()-i-1)
return false;
return f(i+1,s);
}


int main(){
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
  
  // Here, let’s take the value of n to be 3.
  string s;
  cout<<f(0,s)<<endl;

}