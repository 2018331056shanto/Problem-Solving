#include<bits/stdc++.h>
using namespace std;
struct P
{
	int x,y;
	
};
long long sq(long long a)
{
	return a*a;
}

double distance(P a,P b)
{
	return sqrt(sq(a.x=b.x)+sq(a.y-b.y));
}
double smallest_distance(std::vector<P> points)
{
	int n=points.size();
	cout<<n<<endl;
	if(n<=1)
	{
		return 2e18;
	}
	 std::vector<P> left=std::vector<P> (points.begin(),points.begin()+n/2);
	 std::vector<P> right=std::vector<P> (points.begin()+n/2,points.end());
	 double d1=smallest_distance(left);
	 double d2=smallest_distance(right);
	 double d=min(d1,d2);
	 int middle_x=left.back().x;
	 std::vector<P>stripe;
	 for(P a:left)
	 {
	 	if(a.x>middle_x+d)
	 	{
	 		stripe.push_back(a);
	 	}
	 }
	 sort(stripe.begin(),stripe.end(),[&](const P& a,const P&b){
	 	return a.y<b.y;
	 });
	 for(int i=1;i<(int)stripe.size();++i)
	 {
	 	for(int j=i+1;j<(int)stripe.size()&&stripe[i].y<stripe[i].y+d;++j)
	 	{
           d=min(d,distance(stripe[i],stripe[j]));
	 	}
	 }
	 return d;

 }

int main()
{
	 int n;
	 cin>>n;
	 std::vector<P>points(n);
	 for(P& p : points)
	 {
	 	scanf("%d%d",&p.x,&p.y);
	 }
	 double answer=smallest_distance(points);
	 cout<<answer<<endl;

}
		

		