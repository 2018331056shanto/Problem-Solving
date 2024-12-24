#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		if((a==1&&b==2&&k==1)||(b==1&&k==1&&a==2))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			int kl=0;
			int g=__gcd(a,b);
			bool flag=false;
			if(g==1)
			{
				//calculate again until both becomes 1
				//cout<<"no"<<endl;

				while(a>1)
				{
					for(int i=2;i<=a;i++)
					{
						if(a%i==0)
						{
							kl+=a/i;
							a/=i;
						}
					}
					if(kl>=k)
					{
						flag=true;
						break;
					}

				}
				if(flag)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					flag=false;
					while(b>1)
				{
					for(int i=2;i<b;i++)
					{
						if(b%i==0)
						{
							kl+=b/i;
							b/=i;
						}
					}
					if(kl>=k)
					{
						flag=true;
						break;
					}
					

				}
				if(flag)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
				}
				

			}
			else
			{
				flag=false;
				if(g==a&&g==b)
				{
					kl=0;
				}
				else if(g==a||g==b)
				{
					kl=1;
				}
				else
				{
					kl=2;
				}
				int aa=a/g;
				int bb=b/g;
				 
				for(int i=2;i<aa;i++)
				{
					if(aa%i==0)
					{
						kl+=aa/i;
						//cout<<"cool"<<endl;
						if(kl>=k)
					{
						flag=true;
						break;

					}
						
						
					}
					
				}
				//cout<<"kl aa "<<kl<<endl;
				if(flag)
				{
					cout<<"YES"<<endl;
				}
				else
				{
				    flag=false;
					for(int i=2;i<bb;i++)
				{
					if(bb%i==0)
					{
						kl+=bb/i;
						//cout<<"bro"<<endl;
						if(kl>=k)
					{
						flag=true;
						break;
					}

						//break;
					}
					
				}
				//cout<<"kl bb"<<kl<<endl;
				//cout<<flag<<endl;
				if(flag)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					flag=false;
					while(g>1)
				{
					for(int i=2;i<=g;i++)
					{
						if(g%i==0)
						{
							kl+=2;
							g/=i;
						}
					}
					if(kl==k)
					{
						flag=true;
						break;
					}
					if(kl>k)
					{
						break;
					}
				}
				if(flag)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}

				}
				}
				//cout<<"aa "<<kl<<endl;
				
				//cout<<"bb "<<kl<<endl;
				
				
				
			}
		}
		
		

	}
}	