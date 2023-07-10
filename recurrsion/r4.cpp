#include<bits/stdc++.h>
using namespace std;

void f(int i,int sum) {
    if(i<1)
    { cout<<sum;
    return;}
    // cout<<"shivam"<<endl;
    cout<<i<<endl;
    f(i-1,sum+i);
   

}
int main(){
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n;
    cin>>n;
    f(n,0);
    return 0;
}