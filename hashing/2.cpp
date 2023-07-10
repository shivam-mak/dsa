#include<bits/stdc++.h>
using namespace std;

int main() {

string s="a,b,c,a,c,d";
cin>>s;

int hash[256]={0};
for (int i = 0; i <s.size(); i++)
{
    hash[s[i]]+=1;
}


//  #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif 



int q;
cout<<"enter q"<<endl;
cin>>q;
while(q--){
int c;
cin>>c;
cout<<hash[c]<<endl;
}
// fetch

return 0;
}