#include<bits/stdc++.h>
using namespace std;
 int gcd( int a, int b)
{
    if(a%b==0){
        return  b;
    }
    gcd(b,a%b);
}
int main()
{
    long long int a,b;
    cin>>a>>b;  
   long long int GCD=  gcd(a,b);
  //cout<<GCD<<endl;
  long long  int lcm=(a*b)/GCD;
  cout<<lcd<<endl;

  }
    

