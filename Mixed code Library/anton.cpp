#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[]="Icosahedron";
  char b[]="Cube";
  char c[]="Octahedron";
  char d[]="Tetrahedron";
  char e[]="Dodecahedron";
  char s[1000];
  int n,sum=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>s;
      if(strcmp(s,a)==0)
      {
          sum+=20;
      }
      else if(strcmp(s,b)==0)
      {
          sum+=6;
      }
      else if(strcmp(s,c)==0)
      {
          sum+=8;
      }
      else if(strcmp(s,d)==0)
      {
          sum+=4;
      }
      else
        sum+=12;
  }
  cout<<sum<<endl;
}
