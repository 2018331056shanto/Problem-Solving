#include<bits/stdc++.h>
using namespace std;
int kk=0;
int a[]={1,1,3,4,4,4,9};
int bsearch(int low,int high,int val)
{

	if(high>=low)
		{

			kk=high;
	 int mid=(low+high)/2;
	 //cout<<mid<<endl;
	if(a[mid]==val)
		return mid;
	if(a[mid]>val)
		 return bsearch(low,mid-1,val);
	if(a[mid]<val)
		return bsearch(mid+1,high,val);

}
return low;

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int l=bsearch(0,6,5);
	cout<<l<<endl;
}	