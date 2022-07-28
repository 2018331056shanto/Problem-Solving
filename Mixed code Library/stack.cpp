#include<bits/stdc++.h>
using namespace std;
void stackshow(stack<int>p)
{
	while(!p.empty())
	{
		cout<<p.top()<<endl;
		p.pop();

	}
	cout<<'\n';
}
int main()
{
	stack<int>s;
	s.push(234);
	s.push(123);
	s.push(232);
	s.pop();
	stackshow(s);
	cout<<s.top();
	return 0; 

}