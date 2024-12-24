#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long int>a;
    long long  c;
    
    for(int i=0;i<n;i++)
    {   
        cin>>c;
        a.push_back(c);
    }
 /*  c=*max_element(a.begin(),a.end());
   a.erase(max_element(a.begin(),a.end()),a.end());
   long long int d=*max_element(a.begin(),a.end());
  unsigned long int product=c*d;
  cout<<c<<endl<<d<<endl;
  cout<<product<<endl;
  */
 sort(a.begin(),a.end());
 int s=a.size()-1;
 c=a[s];
 long long int d=a[s-1];
long long int f=c*d;
 //cout<<c<<endl<<d<<endl;
 cout<<f<<endl;

}