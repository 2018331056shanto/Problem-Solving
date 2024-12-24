// // #include<bits/stdc++.h>
// // using namespace std;
// // int b[10000];
// // int len;
// // void preprocess(int n,int ar[])
// // {
// // 	len=(int)sqrt(n+.0)+1;
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		b[i/len]+=ar[i];
// // 	}
// // }
// // void queries(int q,int ar[])
// // {
// // 	// for(int i=0;i<10;i++)
// // 	// 	{
// // 	// 		cout<<ar[i]<<endl;
// // 	// 	}
// // 	for(int i=0;i<q;i++)
// // 	{
// // 		int l,r;
// // 		cin>>l>>r;
// // 		int sum=0;
// // 		int c_l=l/len;
// // 		int c_r=l/len;
		
// // 		if(c_l==c_r)
// // 		{
// // 			for(int i=l;i<=r;i++)
// // 			{
// // 				sum+=ar[i];
// // 			}
// // 		}
// // 		else
// // 		{
// // 			for(int i=l,end=(c_l+1)*len-1;i<=end;++i)
// // 			{
// // 				sum+=ar[i];
// // 			}
// // 			for(int i=c_l+1;i<=c_r-1;++i)
// // 			{
// // 				sum+=b[i];
// // 			}
// // 			for(int i=c_r*len;i<=r;++i)
// // 			{
// // 				sum+=ar[i];
// // 			}
// // 		}
// // 		cout<<sum<<endl;

// // 	}
// // }
// // int main()
// // {
// // 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// // 	int n;
// // 	cin>>n;
// // 	int ar[1000];
// // 	memset(ar,0,sizeof(ar));
// // 	for(int i=1;i<=n;i++)
// // 	{
// // 		cin>>ar[i];
// // 	}	
// // 	preprocess(n,ar);
// // 	int q;
// // 	cin>>q;
// // 	queries(q,ar);
// // 	//updating
// // 	int up;
// // 	cin>>up;
// // 	for(int i=0;i<up;i++)
// // 	{
// // 		int pos,val;
// // 		cin>>pos>>val;
// // 		int l=pos/len;
// // 		// cout<<"lf "<<l<<" "<<b[l]<<" "<<val-ar[pos]<<endl;
// // 		b[l]+=(val-ar[pos]);
// // 		ar[pos]=val;
// // 		cout<<b[l]<<endl;
// // 	} 
// // 	// cout<<"fuck "<<ar[3]<<endl;
// // 	queries(2,ar);
	
	
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int i;
// 	int cnt=0;
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	for( i=1;i<=100;i*=2)
// 	{
// 		for(int j=100;j>=i;j-=2)
// 		{
// 			cnt++;
// 		}
// 		for(int j=0;j<1;j--)
// 		{
// 			cnt++;
// 		}
// 		cnt++;
		
// 	}	
// 	cout<<cnt<<endl;
// }
// hekki j love of 
#include<bits/stdc++.h>
using namespace std;

struct node{
    int value;
    node* next;
    node(int val)
    {
    	value=val;
    	next=NULL;
    }
};

node* head=NULL; 
int cnt=0;
void insert_before(int x, int y){

 if(head==NULL)
 {
 	node*temp=new node(x);
 	head=temp;
 	// cout<<head->value<<endl;
 	return;
 }
 if(head->value==y)
 {

 	node *temp=new node(x);
 	temp->next=head;
 	head=temp;
 	// cout<<"hello "<<head->value<<endl;
 	return;
 }
 node* head1=head;
 while(head1->next!=NULL)
 {

 	node *temp=head1->next;
 	if(temp->value==y)
 	{
 		node *temp1=new node(x);
 		head1->next=temp1;
 		temp1->next=temp;
 		return;
 	}
 	head1=head1->next;
 }
 node*temp3=new node(x);
 head1->next=temp3;

}


void print_list(){
    node* current_node = head;
    while(current_node!=NULL){
        cout<<current_node->value<<endl;
        current_node = current_node->next;
    }
}

int main()
{
	
    insert_before(10,5);
    insert_before(15,10);
    insert_before(53,33);
   	insert_before(23,53);
   	insert_before(44,15);
   	insert_before(200,222);
    print_list();
    return 0;
}