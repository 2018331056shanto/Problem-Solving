#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n=1000;
	int k=0;
	while((1<<k)<n)
	{
		k++;
	}
	cout<<k<<endl;
}	