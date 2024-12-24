// #include<bits/stdc++.h>
// using namespace std;

// struct point{

// 	int id;
// 	int x;
// 	int y;
// 	point(int i,int a,int b){

// 		id=i;
// 		x=a;
// 		y=b;
// 	}
// };
// struct task{

// 	int id;
// 	int priority;
// 	int burst_time;
// 	int arrival_time;
// 	int completion_time;
// 	int first_arrival_time;
// 	int temp_burst;
// 	bool in_queue;
// 	task(int i,int p,int b,int a){
// 		id=i;
// 		priority=p;
// 		arrival_time=a;
// 		burst_time=b;
// 		in_queue=false;
// 	}
// 	int turnaround_time(){
// 		return completion_time-arrival_time;
// 	}
// 	int waiting_time(){
// 		return turnaround_time()-burst_time;

// 	}
// 	int response_time(){
// 		return first_arrival_time-arrival_time;
// 	}
// };
// bool rr_cmp(task a,task b){
// 	if(a.arrival_time==b.arrival_time){
// 		return a.id<=b.id;

// 	}
// 	else{
// 		return a.arrival_time<=b.arrival_time;
// 	}
// }

// void check(vector<task>&t,int current_time,queue<int>&q){
// 	for(int i=0;i<t.size();i++){

// 		if(t[i].arrival_time<=current_time&&t[i].in_queue==false&&t[i].temp_burst>0){
// 			t[i].in_queue=true;
// 			q.push(i);
// 		}
// 	}
// }
// void printGrantChart(vector<point>v){


// 	for(int i=0; i<v.size(); i++)
//         cout<<"-------";
//     cout<<endl;
//     cout<<"|";
//     for(int i=0; i<v.size(); i++)
//         cout<<" P"<<v[i].id<<" |";
//     cout<<endl;
//     for(int i=0; i<v.size(); i++)
//         cout<<"-------";
//     cout<<endl;

//     cout<<v[0].x<<"   "<<v[0].y<<"    ";
//     for(int i=1; i<v.size(); i++)
//     {
//         cout<<v[i].y<<"    ";
//     }

//     cout<<endl;
// }

// void RR(vector<task>t,int time_quantum){
// 	vector<point>points;
// 	sort(t.begin(),t.end(),rr_cmp);

// 	queue<int>q;
// 	q.push(0);
// 	t[0].in_queue=true;
// 	int current_time=0;
// 	while(!q.empty()){
// 		int i=q.front();
// 		q.pop();
// 		if(t[i].arrival_time>current_time){
// 			points.push_back(point(0,current_time,t[i].arrival_time));
// 			current_time=t[i].arrival_time;


// 		}
// 		if(t[i].burst_time==t[i].temp_burst){
// 			t[i].first_arrival_time=current_time;
// 			if(t[i].temp_burst<=time_quantum){
// 				t[i].completion_time=current_time+t[i].temp_burst;

// 				points.push_back(point(t[i].id,current_time,t[i].completion_time));
// 				current_time=t[i].completion_time;
// 				t[i].temp_burst=0;
// 				check(t,current_time,q);
// 			}
// 			else{

// 				t[i].temp_burst-=time_quantum;
// 				points.push_back(point(t[i].id,current_time,current_time+time_quantum));
// 				current_time+=time_quantum;
// 				check(t,current_time,q);
// 				q.push(i);


// 			}
// 			printGrantChart(points);
// 			cout<<"ID CT TT WT RT"<<endl;
// 			for (int i=0;i<t.size();i++){
// 				cout<<t[i].id<<" "<<t[i].completion_time<<" "<<t[i].turnaround_time()<<" "<<t[i].waiting_time()<<" "<<t[i].response_time()<<endl;
// 			}
// 		}
// 	}
// }

// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int n,id,p,b,tq,a;
// 	vector<task>tasks;
// 	cin>>n>>tq;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>id>>p>>b>>a;
// 		tasks.push_back(task(id,p,b,a));
// 	}
// 	RR(tasks,tq);
// }
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
const int P=5;
const int R=3;

void calculateNeed(int need[P][R],int maxm[P][R],int allot[P][R])
{
	for(int i=0;i<P;i++){
		for(int  j=0;j<R;j++)
		{
			need[i][j]=maxm[i][j]-allot[i][j];
		}
	}
}

bool isSafe(int process[],int avail[],int maxm[][R],int allot[][R])
{

	int need[P][R];
	calculateNeed(need,maxm,allot);

	bool finish[P]={0};
	int safeSeq[P];
	int work[R];
	for(int i=0;i<R;i++)
	{
		work[i]=avail[i];
	}

		int count=0;
		while(count<P){
			bool found=false;

			for(int i=0;i<P;i++)
			{
				if(finish[i]==0)
				{
					int j;
					for(j=0;j<R;j++)
					{
						if(need[i][j]>work[j])
							break;
					}
					if(j==R)
					{
						for(int k=0;k<R;k++)
						{
							work[k]+=allot[i][k];
						}
						safeSeq[count++]=i;
						finish[i]=1;
						found=true;
					}

				}
			}
			if(found==false)
				{
					return false;
				}

		}

	
	
	for(int i=0;i<P;i++)
	{
		cout<<safeSeq[i]<<" ";
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	// int c;
	// FILE *fp,*fr;
	// fp=fopen("abc.txt","r");
	// fr=fopen("cd.txt","w");
	// if (fp)
	// {
	// 	while ((c = getc(fp)) != EOF){

	// 		// putchar(c);	
	// 		putc(c,fr);
	// 	}
	
	// 	fclose(fp);
	// }

	int process[]={0,1,2,3,4};
	int avail[]={3,2,1};
	int maxm[][R]={
		{7,5,5},
		{3,2,2},
		{9,0,4},
		{2,3,3},
		{3,3,3}
	};
	int allot[][R]={
		{0,1,3},
		{2,0,0},
		{3,0,1},
		{2,1,1},
		{0,0,2}
	};

	isSafe(process,avail,maxm,allot);
}
