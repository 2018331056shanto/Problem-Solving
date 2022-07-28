#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    int a[100]={1,3,66,363,72,73,32,789,36842,4446,23,7,0,4,4,2,23,4,5,4,10,20};
    n=22;
    vector<int>p(a,a+n);
    cout<<" sort:"<<endl;
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<" reverse :"<<endl;
   // reverse(p.begin(),p.end());
    for(int j=0;j<n;j++)
    {
        cout<<p[j]<<" ";
    }
    cout<<"binary search"<<endl;

    bool present=binary_search(p.begin(),p.end(),0);
    if(present)
    {
        cout<<" present "<<endl;
    }
    else
    {
      cout<<" not present"<<endl;
    }
    cout<<" max element:"<<endl;
    int c=*max_element(p.begin(),p.end());
    cout<<" max element"<<c<<endl;
    cout<<" minimum element:"<<endl;
    int d=*min_element(p.begin(),p.end());
    cout<<" min element"<<d<<endl;
    cout<<" accumulate :"<<endl;
    int e=accumulate(p.begin(),p.end(),0);
    cout<<e<<endl;
    cout<<" count how many times a number has:"<<endl;
    int f=count(p.begin(),p.end(),4);
    cout<<f<<endl;
    cout<<" find a number has or not"<<endl;
    //find(p.begin(),p.end(),99)!=p.end()?cout<<" found"<<endl; 
    //cout<<" not found"<<endl;
    auto o=lower_bound(p.begin(),p.end(),4);
    auto q=upper_bound(p.begin(),p.end(),4);
    cout<<" lower bound of desired number: "<<o-p.begin()<<endl;
    cout<<" uppuer bound of desired number: "<<q-p.begin()<<endl;
    cout<<" erease a position value :"<<endl;
    p.erase(p.begin()+5);
    for(int l=0;l<p.size();l++)
    {
        cout<<p[l]<<" ";
    }
    cout<<" \n";
    cout<<" erase the duplicate number: "<<endl;
    p.erase(unique(p.begin(),p.end()),p.end());
    for(int m=0;m<p.size();m++)
    {
        cout<<p[m]<<" ";
    }
    cout<<" \n";
    cout<<" next permutation"<<endl;
    next_permutation(p.begin(),p.end());
    for(int s=0;s<p.size();s++)
    {
        cout<<p[s]<<" ";
    }
    cout<<"\n";




}
