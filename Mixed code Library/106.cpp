// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n;
//     cin>>n;
//     int k,l;
//     int flag=0;
//     vector<long long int >a,b;
//     a.push_back(3);
//     b.push_back(5);
//     for(int i=1;a[i-1]*3<=n;i++)
//     {
       

//         a.push_back(a[i-1]*3);
//     }
//     for(int i=1;b[i-1]*5<=n;i++)
//     {
//         b.push_back(b[i-1]*5);
//     }

//     for(int i=0;i<a.size();i++)
//     {
//         for(int j=0;j<b.size();j++)
//         {
//             if(a[i]+b[j]==n)
//             {
//                 k=i;
//                 l=j;
//                 flag=1;
//                 break;
//             }
//             if(a[i]+b[j]>n)
//             {
//                 break;
//             }
//         }
//         if(flag)
//         {
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout<<k+1<<" "<<l+1<<endl;
//     }
//     else
//     {
//         cout<<"-1"<<endl;
//     }
    
    
// }
    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int x;
        cin>>x;
        cout<<x;
    
    }

    int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        solve();
        
    }