	// #include<bits/stdc++.h>
	// using namespace std;

	// void solve()
	// {

	// 	int n,m,sx,sy,d;
	// 	cin>>n>>m>>sx>>sy>>d;
	// 	bool flag=false,flag1=false;
	// 	if((sx-d<=1||d>=m-sy)){
			
	// 	flag=true;			


	// 	}
	// 	 if((sy-d<=1||d>=n-sx))
	// 	{
	// 		flag1=true;
	// 	}
	// 	if(flag&&flag1)
	// 	{
	// 		cout<<-1<<endl;
	// 	}
	// 	else
	// 	{
	// 		cout<<n+m-2<<endl;
	// 	}
	
	// }

	// int32_t main()
	// {
	// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// 	int t;
	// 	cin>>t;
	// 	while(t--)
	// 	{
	// 		solve();
	// 	}
	// }
#include<bits/stdc++.h>
using namespace std;

struct point{
	int x;
	int y;
	int id;
	point(int i,int a,int b){
		id=i;
		x=a;
		y=b;
	}

};
struct task{
	int id;
	int priority;
	int burst_time;
	int arrival_time;
	int completion_time;
	int first_arrival_time;

	task(int i,int p,int b,int a)
	{
		id=i;
		priority=p;
		burst_time=b;
		arrival_time=a;
	}
	int turnaround_time()
	{
		return completion_time-arrival_time;
	}
	int waiting_time(){
		return turnaround_time()-burst_time;

	}
	int response_time(){
		return first_arrival_time-arrival_time;
	}
};

bool fcps_cmp(task a,task b){
	if(a.arrival_time==b.arrival_time)
	{
		return a.id<=b.id;

	}
	else 
			return a.arrival_time<=b.arrival_time;
}

void print(vector<point>v){
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<"--------";

	}
	cout<<endl;
	cout<<"|";
	for(int i=0;i<v.size();i++)
	{
		cout<<" P"<<v[i].id<<" |";

	}
	cout<<endl;
	for(int i=0;i<v.size();i++)
		cout<<"--------";
	cout<<endl;

	cout<<v[0].x<<" "<<v[0].y<<"   ";
	for(int i=1;i<v.size();i++)
	{
		cout<<v[i].y<<"     ";

	}
	cout<<endl;

}

void FCPS(vector<task>tasks){

	vector<point>points;
	sort(tasks.begin(),tasks.end(),fcps_cmp);

	int current_time=0;
	for(int i=0;i<tasks.size();i++)
	{
		if(tasks[i].arrival_time>current_time)
		{
			points.push_back(point(0,current_time,tasks[i].arrival_time));
			current_time=tasks[i].arrival_time;

		}

		tasks[i].first_arrival_time=current_time;
		tasks[i].completion_time=current_time+tasks[i].burst_time;

		points.push_back(point(tasks[i].id,current_time,tasks[i].completion_time));
		current_time=tasks[i].completion_time;

	}
	print(points);
	cout<<"ID CT TT WT RT"<<endl;
	for(int i=0;i<tasks.size();i++)
	{
		cout<<tasks[i].id<<" "<<tasks[i].completion_time<<" "<<tasks[i].turnaround_time()<<" "<<tasks[i].waiting_time()<<" "<<tasks[i].response_time()<<endl;
	}

}

bool sfj_cmp(task a,task b){
	if(a.arrival_time==b.arrival_time){
		return a.burst_time<=b.burst_time;
	}
	else
		return a.arrival_time<=b.arrival_time;
}

void SJF(vector<task>tasks){
	vector<point>points;
	vector<task>ans;
	sort(tasks.begin(),tasks.end(),sfj_cmp);

	int current_time=0;
	for(int i=0;i<tasks.size();i++)
	{
		if(tasks[i].arrival_time>current_time){
			points.push_back(point(0,current_time,tasks[i].arrival_time));
			current_time=tasks[i].arrival_time;

		}
		int j=i;

		while(j<tasks.size()&& current_time>=tasks[j].arrival_time){
			if(tasks[i].burst_time>tasks[j].burst_time)
				swap(tasks[i],tasks[j]);

			j++;
		}
		tasks[i].first_arrival_time=current_time;
		tasks[i].completion_time=current_time+tasks[i].burst_time;

		points.push_back(point(tasks[i].id,current_time,tasks[i].completion_time));
		current_time=tasks[i].completion_time;


	}
	print(points);
	for(int i=0;i<tasks.size();i++)
    {
        cout<<tasks[i].id<<" "<<tasks[i].completion_time<<" "<<tasks[i].turnaround_time()<<" "<<tasks[i].waiting_time()<<" "<<tasks[i].response_time()<<endl;
    }

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	vector<task>tasks;
	int n,id,p,b,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>id>>p>>b>>a;
		tasks.push_back(task(id,p,b,a));

	}
	// FCPS(tasks);
	SJF(tasks);
}