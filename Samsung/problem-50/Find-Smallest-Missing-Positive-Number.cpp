/*
You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number missing from the array in O(n) time using constant extra space.

Input: First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.

Output: Single line output, print the smallest positive number missing.

Constraints:

1<=T<=100 and 1<=N<=100
Input:
2
5
1 2 3 4 5
5
0 -10 1 3 -20
Output:
6
2
*/

#include<iostream>
#include<algorithm>

using namespace std;

int abs(int x)
{
	if(x>=0)
		return x;

	else 
		return -x;
}

void solve()
{

	int n;
	cin>>n;

	int arr[n]={0};
	int f=0;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

		if(arr[i]>0)
			f=1;
	}

	if(f==0)
	{
		cout<<1<<endl;
		return;
	
	}

	//Now I have to put all the negative value left side and positive value to the right side


	int start=0;
	int neg_idx=0;

	while(start<n)
	{
		if(arr[start]<=0)
		{
			int temp=arr[start];

			arr[start]=arr[neg_idx];

			arr[neg_idx]=temp;
			neg_idx++;
		}
		start++;
	}

	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	for(int i=neg_idx;i<n;i++)
	{
		int actual_idx=i;

		int item=abs(arr[actual_idx])-1+neg_idx;

		if(item<n&&arr[item]>0)
		{
			arr[item]*=-1;
		}

	}
		for(auto x:arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	

	int flag=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]>0&&flag==0)
		{
			cout<<i-neg_idx+1<<endl;
			flag=1;
		}	
	}

	if(flag==0)
	{
		if(neg_idx==0)
		{
			cout<<n+1<<endl;
		}
	}

/* This is using O(nLogn)
	sort(arr,arr+n);

	int cnt=0;
	int startToFindFrom=0;
	if(arr[0]<0)
	{
		startToFindFrom=0;
	}
	else
	{
		startToFindFrom=arr[0];
	}


	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			continue;
		}
		else if(startToFindFrom==arr[i])
		{
			++startToFindFrom;
		}
		else{
			break;
		}
	}

	cout<<startToFindFrom<<endl;

	*/


}

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
}