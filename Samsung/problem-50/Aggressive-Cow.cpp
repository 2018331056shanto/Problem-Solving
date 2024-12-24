/*
You are given an array of integers which represents positions available and an integer c(cows).
Now you have to choose c positions such that minimum difference between cows is maximized.
For example,
5 3
1 3 5 8 10

Output: 4
1 5 10
*/





// bool cowPlace(mid,c)
// {
// 	last=v[0]
// 	cnt=1

// 	for(i=1;i<n;i++)
// 	{
// 		if(v[i]-last>=mid)
// 			last=v[i]
// 			cnt++
// 	}

// 	if(cnt>=c)
// 		return true
// 	return false
// }

// cow()
// {

// 	sort(v)

// 	low=1;
// 	high=v[n-1]-v[0]


// 	while(low<=high)
// 	{
// 		mid=(low+high)/2


// 		if(cowPlace(mid,c))
// 			low=mid+1

// 		else
// 			high=mid-1
// 	}



// 	return high


// }





#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int n,c;

// bool canWePlace(vector<int>&v,int dist,int c)
// {

// 	int cntCows=1;
// 	int last=v[0];

// 	for(int i=1;i<n;i++)
// 	{
// 		if(v[i]-last>=dist)
// 		{
// 			cntCows++;
// 			last=v[i];
// 		}
// 	}

// 	if(cntCows>=c)
// 	{
// 		return true;
// 	}

// 	return false;
// }

// int func(vector<int>&v,int c)
// {
// 	int low=1;
// 	int high=v[n-1]-v[0];

// 	while(low<=high)
// 	{
// 		int mid=(low+high)/2;


// 		if(canWePlace(v,mid,c))
// 		{
// 			low=mid+1;
// 		}
// 		else
// 		{
// 			high=mid-1;
// 		}
// 	}
// 	return high;
// }

bool cowPlace(vector<int>&v,int mid,int c)
{
	int last=v[0];
	int cnt=1;

	for(int i=1;i<v.size();i++)
	{
		if(v[i]-last>=mid)
		{
			last=v[i];
			cnt++;
		}
		
	}
	if(cnt>=c)
		return true;

	else 
		return false;
	

}

void solve()
{
	cin>>n>>c;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}



	// sort(v.begin(),v.end());

	// int mxDist=func(v,c);

	// cout<<mxDist<<endl;


	// vector<int>ans;

	// ans.push_back(v[0]);

	// int last=v[0];
	// for(int i=1;i<n;i++)
	// {
	// 	if(v[i]-last>=mxDist)
	// 	{
	// 		ans.push_back(v[i]);
	// 		last=v[i];
	// 	}
	// }

	// for(auto x:ans)
	// {
	// 	cout<<x<<" ";
	// }
	// cout<<endl;


	sort(v.begin(),v.end());


	int low=1;

	int high=v[n-1]-v[0];

	while(low<=high)
	{
		int mid=low+(high-low)/2;


		if(cowPlace(v,mid,c))
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}

	cout<<high<<endl;
	
}

int main()
{
	solve();
}