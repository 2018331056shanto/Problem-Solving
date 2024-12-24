#include<bits/stdc++.h>
using namespace std;
int a[300000],b[300000];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		std::vector<int>val,mn,mx;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			val.push_back(x);
		}
		int vmx=val[0];
		a[val[0]]=1;
		b[val[0]]=1;
		int vmn=val[0];
	    mn.push_back(val[0]);
	    mx.push_back(val[0]);
		for(int i=1;i<n;i++)
		{
			if(val[i]!=vmx)
			{
				mx.push_back(val[i]);
				mn.push_back(val[i]);
				a[val[i]]=1;
				b[val[i]]=1;
				vmx=val[i];
				//cout<<"vmx "<<vmx<<endl;
			}
			else
			{
				if(i==1)
				{

				for(int j=1;j<vmx;j++)
				{
					if(a[j]==0)
					{
						mn.push_back(j);
						a[j]=1;
						//vmn=j;
						break;
						
					}

				}
				for(int k=vmx-1;k>0;k--)
				{
					if(b[k]==0)
					{
						mx.push_back(k);
						b[k]=1;
						break;
					}

				}

				}
				else
				{
					for(int j=1;j<vmx;j++)
				{
					if(a[j]==0)
					{
						mn.push_back(j);
						a[j]=1;
						//vmn=j;
						break;
						
					}

				}
				for(int k=val[i-1];k>0;k--)
				{
					if(b[k]==0)
					{
						mx.push_back(k);
						b[k]=1;
						break;
					}

				}

				
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<mn[i]<<" ";
		}
		cout<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<mx[j]<<" ";
		}
		cout<<endl;

	}
}	