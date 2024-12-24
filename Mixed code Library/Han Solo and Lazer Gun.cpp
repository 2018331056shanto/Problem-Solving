#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        int b,c;
        cin>>b>>c;
        a.push_back(make_pair(b,c));

    }
    sort(a.begin(),a.end());
    int cnty=0;
    int cntran=0;
    for(int i=0;i<n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    for(int i=0;i<n;i++)
    {
        
         if(((a[i+1].first-x)*(a[i].second-y))==((a[i+1].second-y)*(a[i].first-x)))
        {
            cnty++;
            cout<<a[i].first<<" "<<a[i+1].first<<endl;
            
        }
        else
        {
            cntran++;
        }
        
        
    }
    cout<<cnty<<" "<<cntran<<endl;
    
    if(cnty>=1)
    {
        cnty=1;
    }
    cout<<cnty+cntran<<endl;
}