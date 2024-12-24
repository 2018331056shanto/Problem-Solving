// #include<bits/stdc++.h>
// using namespace std;


// void solve(){
	
// 	int n;
// 	cin>>n;
	

// 	vector<int>v(n);
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
		
// 	}

//    int mn=v.back();
//    long long int ans=0;

//    for(int i=n-2;i>=0;i--)
//    {
//         if(v[i]<=mn)
//         {
//             mn=v[i];
//             continue;
//         }

//         int cnt=(v[i]+mn-1)/mn;
//         mn=v[i]/cnt;
//         ans+=(cnt-1);
//    }

//    cout<<ans<<endl;


// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		int t;
// 		cin>>t;
// 		while(t--)
// 		{
// 			solve();
// 		}
// 	}



// #include<bits/stdc++.h>
// using namespace std;

// int partition(vector<int>&arr,int low,int high)
// {
//     int pivot=arr[high];

//     int i=low-1;

//     for(int j=low;j<high;j++)
//     {
//         if(arr[j]<pivot)
//         {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);

//     return i+1;
// }

// void quickSort(vector<int> &arr,int low,int high)
// {

//     if(low<high)
//     {
//         int pi=partition(arr,low,high);

//         quickSort(arr,low,pi-1);
//         quickSort(arr,pi+1,high);
//     }
// }

// void solve(){
    
//     vector<int>arr={5,3,5,1,3,5,6};

//     quickSort(arr,0,6);

//     for(auto x:arr)
//         cout<<x<<" ";


// }

// int32_t main()
//     {
//         ios_base::sync_with_stdio(false); cin.tie(NULL);
//         int t;
//         // cin>>t;
//         // while(t--)
//         {
//             solve();
//         }
//     }


#include<bits/stdc++.h>
using namespace std;


void solve(){
    

    int ar[]={1,1,1,2,3,3,6,6,7};
    int idx=0;
    for(int i=1;i<9;i++)
    {
        if(ar[i]!=ar[index])
        {
            idx++;

            ar[idx]=ar[i];
        }
    }
}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        // int t;
        // cin>>t;
        // while(t--)
        {
            solve();
        }
    }
