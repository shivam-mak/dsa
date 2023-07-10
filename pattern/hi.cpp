#include <bits/stdc++.h>
using namespace std;
void print(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print3(int n)
{

    for(int i=1;i<=2*n-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>n) stars = 2*n-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
           // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}

void print2(int n)
{

    for (int i = 0; i<= n; i++)
    {
        for (int j = 0; j< i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j<2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j< i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print14(int n)
{

    for (int i = 0; i< n; i++)
    {
        for (char ch = 'A'; ch <='A'+i; ch++)
        {
        cout<<ch<<" ";
        }
        
        }
        cout << endl;
    }

void print11(int n)
{

    for (int i = 0; i< n; i++)
    {
        int start=0;
        if (i%2 ==0)
        start=1;
        else start=0;
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start=start-1;
        } 
        cout << endl;
    }
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
 int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print14(n);
    }
}