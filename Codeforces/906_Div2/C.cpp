#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2)
    {
        cout<<-1<<endl;
        return;
    }

    int cnt0=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            cnt0++;
        }
    }

    if(cnt0!=n/2)
    {
        cout<<-1<<endl;
        return;
    }
    bool flag=false;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        cout<<0<<endl;
        return;
    }

    vector<int>ans;

    int i=0;
    int j=n-1;
    int cnt=0;
    while(i<j)
    {
        if(s[i]=='0'&&s[j-i]=='0')
        {
            ans.push_back(j+1);
            s.insert(j+1,"01");            
            j=s.length();
            cout<<j<<" "<<s<<endl;
            break;

        }
        else if(s[i]=='1'&&s[j-i]=='1')
        {
            ans.push_back(i);
            s.insert(i,"01");
            j+=2;
        }
        else
        {
            i++;
            j--;
        }
    }
    cout<<s<<endl;

}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }
