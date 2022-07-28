#include<bits/stdc++.h>
using namespace std;
void showlist(list<int>c)
{
    list<int> ::iterator it;
    for(it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}
int main()
{

   list<int>a,b;
   int n;
   cin>>n;
   for(int i=1;i<n;i++)
   {
       a.push_back(i*2);
       b.push_back(i*3);
       a.push_front(i*4);
       b.push_front(i*5);
   } 
   showlist(a);
   showlist(b);
   a.pop_back();
   b.pop_back();
   showlist(a);
   showlist(b);
   a.pop_front();
   b.pop_front();
   showlist(a);
   showlist(b);
   a.reverse();
   b.reverse();
   showlist(a);
   showlist(b);
   a.sort();
   b.sort();
   showlist(a);
   showlist(b);
   int d=a.front();
   int e=b.front();
   int f=a.back();
   int g=b.back();
   cout<<d<<endl<<e<<endl<<f<<endl<<g<<endl;
   list<int>:: iterator l,h;
   l=a.end();
   h=b.end();
   cout<<*l<<endl<<*h<<endl;
   if(!a.empty())
   {
       cout<<" YEAH THERE"<<endl;
   }  
   if(!b.empty())
   {
       cout<<" yeah there"<<endl;
   }
   


}