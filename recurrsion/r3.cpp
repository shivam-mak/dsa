#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) {
    if(i<1)
    return;
    // cout<<"shivam"<<endl;
    cout<<i<<endl;
    f(i-1,n);
   

}
int main(){
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n;
    cin>>n;
    f(n,n);
    return 0;
}