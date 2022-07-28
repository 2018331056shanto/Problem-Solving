#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,l;
		cin>>n>>l;
		if(n==1)
			{
				cout<<-1<<endl;
				continue;
			}
		std::vector<pair<pair<int,char>,int>>odd,even;
		std::vector<int> v;
		std::vector<char> v1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			char x;
			cin>>x;
			v1.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]%2==1)
			{
				odd.push_back({{v[i],v1[i]},i});
			}
			else
			{
				even.push_back({{v[i],v1[i]},i});
			}
		}
		sort(odd.begin(), odd.end());
		sort(even.begin(),even.end());
		int a[500000]={0};
		stack<pair<pair<int,char>,int>>sodd,seven;
		if(odd.size()>0)
		{
			sodd.push({{odd[0].first.first,odd[0].first.second},odd[0].second});
        //char c=sodd.top().first.second;
       // cout<<"fuck"<<endl;
        for(int i=1;i<odd.size();i++)
        {
        	char c;
        	//cout<<"mc"<<endl;
        	// if(sodd.size()==0)
        	// 	sodd.push({{odd[i].first.first,odd[i].first.second},odd[i].second});
        	if(sodd.size()>0)
        	 c=sodd.top().first.second;
        	if(odd[i].first.second==c||sodd.size()==0)
        	{
        		sodd.push({{odd[i].first.first,odd[i].first.second},odd[i].second});
        		//cout<<"match"<<endl;

        	}
        	else
        	{
        		//cout<<"not match"<<endl;
               int f=odd[i].first.first;
               char cf=odd[i].first.second;
               int sf=sodd.top().first.first;
               char csf=sodd.top().first.second;
               int sff=sodd.top().second;
               sodd.pop();
               int iff=odd[i].second;
               if(csf=='R'&&cf=='L')
               {
               	 int k=abs(f-sf)/2;
               a[iff]=k;
               a[sff]=k;
               //cout<<a[iff]<<" "<<a[sff]<<endl;
               }
              else
              {
              	//cout<<"fuck"<<endl;
              	int kk=l-f;
              	int idd=l-(sf-kk);
              	int ll=idd/2;
              	a[iff]=ll+sf;
              	a[sff]=sf+ll;

              }
        	}


        }
        //cout<<"hi"<<endl;
        //cout<<"sodd size"<<sodd.size()<<endl;
        if(sodd.size()>0)
        {
        	//cout<<"hii"<<endl;
        	char ch=sodd.top().first.second;
        	if(ch=='R')
        	{
        		if(sodd.size()%2==0)
        	{
        		while(!sodd.empty())
        		{
        			int st=sodd.top().first.first;
        			int sti=sodd.top().second;
        			sodd.pop();
        			int st2=sodd.top().first.first;
        			int st2i=sodd.top().second;
        			sodd.pop();
        			int ll=l-st;
        			int mm=st2+ll;
        			int nn=abs(l-mm)/2;
        			a[sti]=ll+nn;
        			a[st2i]=nn+ll;

        		}
        	}
        	else
        	{
        		int sz=sodd.size();
        		int ss=0;
        		while(!sodd.empty())
        		{
        			
        			if(ss==sz-1)
        				break;
        			int st=sodd.top().first.first;
        			int sti=sodd.top().second;
        			ss++;
        			sodd.pop();
        			int st2=sodd.top().first.first;
        			int st2i=sodd.top().second;
        			ss++;
        			sodd.pop();
        			int ll=l-st;
        			int mm=st2+ll;
        			int nn=abs(l-mm)/2;
        			a[sti]=ll+nn;
        			a[st2i]=nn+ll;

        		}
        		int stid=sodd.top().second;
        		sodd.pop();
        		a[stid]=-1;

        	}
        	}
        	else
        	{
        		//cout<<"hi"<<endl;
        		if(sodd.size()%2==0)
        	{
        		//cout<<"even"<<endl;
        		while(!sodd.empty())
        		{
        			int st=sodd.top().first.first;
        			int sti=sodd.top().second;
        			sodd.pop();
        			int st2=sodd.top().first.first;
        			int st2i=sodd.top().second;
        			sodd.pop();
        			int ll=st-st2;
        			int kkk=ll/2;
        			//cout<<"in there"<<endl;
        			a[sti]=st2+kkk;
        			a[st2i]=st2+kkk;
        			//cout<<a[sti]<<" "<<a[st2i]<<endl;

        		}
        	}
        	else
        	{
        		int sz=sodd.size();
        		int ss=0;
        		while(!sodd.empty())
        		{
        			
        			if(ss==sz-1)
        				break;
        			int st=sodd.top().first.first;
        			int sti=sodd.top().second;
        			ss++;
        			sodd.pop();
        			int st2=sodd.top().first.first;
        			int st2i=sodd.top().second;
        			ss++;
        			sodd.pop();
        			int ll=st-st2;
        			int kkk=ll/2;
        			a[sti]=st2+kkk;
        			a[st2i]=st2+kkk;

        		}
        		int stid=sodd.top().second;
        		sodd.pop();
        		a[stid]=-1;

        	}
        	}
        	
        }
		}
		
        if(even.size()>0)
        {
        	 seven.push({{even[0].first.first,even[0].first.second},even[0].second});
        //char c=sodd.top().first.second;
        //cout<<"fuck"<<endl;
        for(int i=1;i<even.size();i++)
        {
        	char c;
        	//cout<<"mc"<<endl;
        	// if(sodd.size()==0)
        	// 	sodd.push({{odd[i].first.first,odd[i].first.second},odd[i].second});
        	if(seven.size()>0)
        	 c=seven.top().first.second;
        	if(even[i].first.second==c||seven.size()==0)
        	{
        		seven.push({{even[i].first.first,even[i].first.second},even[i].second});
        		//cout<<"match"<<endl;

        	}
        	else
        	{

        		//cout<<"not match"<<endl;
               int f=even[i].first.first;
				//cout<<"hhhslsa"<<endl;
               int sf=seven.top().first.first;
               char cf=odd[i].first.second;
              // int sf=sodd.top().first.first;
              // cout<<"bro"<<endl;
               char csf=seven.top().first.second;
              // cout
               int sff=seven.top().second;
                int iff=even[i].second;
               seven.pop();
              
               //cout<<"hhhss"<<endl;
              if(csf=='R'&&cf=='L')
               {
               	 int k=abs(f-sf)/2;
               a[iff]=k;
               a[sff]=k;
               //cout<<a[iff]<<" "<<a[sff]<<endl;
               }
              else
              {
              	//cout<<"hhh"<<endl;
              	int kk=sf;
              	int mm=f-sf;
              	int ll=mm/2;
              	a[iff]=ll+sf;
              	a[sff]=sf+ll;

              }
        	}


        }
        //cout<<"hi"<<endl;
        //cout<<"sodd size"<<seven.size()<<endl;
          if(seven.size()>0)
        {
        	//cout<<"hii"<<endl;
        	char ch=seven.top().first.second;
        	if(ch=='R')
        	{
        		if(seven.size()%2==0)
        	{
        		while(!seven.empty())
        		{
        			int st=seven.top().first.first;
        			int sti=seven.top().second;
        			seven.pop();
        			int st2=seven.top().first.first;
        			int st2i=seven.top().second;
        			seven.pop();
        			int ll=l-st;
        			int mm=st2+ll;
        			int nn=abs(l-mm)/2;
        			a[sti]=ll+nn;
        			a[st2i]=nn+ll;

        		}
        	}
        	else
        	{
        		int sz=seven.size();
        		int ss=0;
        		while(!seven.empty())
        		{
        			
        			if(ss==sz-1)
        				break;
        			int st=seven.top().first.first;
        			int sti=seven.top().second;
        			ss++;
        			seven.pop();
        			int st2=seven.top().first.first;
        			int st2i=seven.top().second;
        			ss++;
        			seven.pop();
        			int ll=l-st;
        			int mm=st2+ll;
        			int nn=abs(l-mm)/2;
        			a[sti]=ll+nn;
        			a[st2i]=nn+ll;

        		}
        		int stid=seven.top().second;
        		seven.pop();
        		a[stid]=-1;

        	}
        	}
        	else
        	{
        		if(seven.size()%2==0)
        	{
        		while(!seven.empty())
        		{
        			int st=seven.top().first.first;
        			int sti=seven.top().second;
        			seven.pop();
        			int st2=seven.top().first.first;
        			int st2i=seven.top().second;
        			seven.pop();
        			int ll=st-st2;
        			int kkk=ll/2;
        			a[sti]=st2+kkk;
        			a[st2i]=st2+kkk;

        		}
        	}
        	else
        	{
        		int sz=seven.size();
        		int ss=0;
        		while(!seven.empty())
        		{
        			
        			if(ss==sz-1)
        				break;
        			int st=seven.top().first.first;
        			int sti=seven.top().second;
        			ss++;
        			seven.pop();
        			int st2=seven.top().first.first;
        			int st2i=seven.top().second;
        			ss++;
        			seven.pop();
        			int ll=st-st2;
        			int kkk=ll/2;
        			a[sti]=st2+kkk;
        			a[st2i]=st2+kkk;

        		}
        		int stid=seven.top().second;
        		seven.pop();
        		a[stid]=-1;

        	}
        	}
        	
        }

        }
        while(!sodd.empty())
        	sodd.pop();
       while(!seven.empty())
       	seven.pop();
      
       v.clear();
       v1.clear();
       even.clear();
       odd.clear();
        //cout<<"hello"<<endl;
        for(int i=0;i<n;i++)
        {
        	cout<<a[i]<<" ";
        }
        cout<<endl;
	}
}	
//6 3 -1 6 3 -1 
//6 1 7 2 3 5 4
//-1 2 7 3 2 7 3 
