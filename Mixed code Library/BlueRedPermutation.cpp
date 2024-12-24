// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
// 	int n;
// 	cin>>n;
// 	std::vector<int> v(n,0);
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	string s;
// 	cin>>s;
//    vector<int>b,r;
//    for(int i=0;i<n;i++)
//    {
//    	 if(s[i]=='R')
//    	 {
//    	 	r.push_back(v[i]);
//    	 }
//    	 else
//    	 {
//    	 	b.push_back(v[i]);
//    	 }
//    }
//    int fl=0;
  
//    sort(b.begin(),b.end());

//    sort(r.begin(),r.end());//cout<<"fuck"<<endl;
//    if(b.size()>0){
//    	if(b.size()==1)
//    	{
//    		if(b[0]<1)
//    		{
//    			fl=1;
//    		}
//    	}
//    	else
//    	for(int i=0;i<b.size();i++)
//    {
//    //	cout<<22<<endl;
//    		if((b[i]==b[i+1]&&b[i]==1)||b[i]<1)
//    		{
//    			fl=1;
//    			break;
//    		}
//    }
//    if(fl)
//    {
//    //	cout<<"lll"<<endl;
//    	 cout<<"NO"<<endl;
//    	 return ;
//    }
//    }
   
//    int k=b.size();
//    if(r.size()>0)
//    {
//    	if(r.size()==1)
//    	{
//    		if(r[0]>k+1)
//    		fl=1;
//    	}
//    	else
//    	{
//    			for(int i=0;i<r.size();i++)
//    {
//    	//cout<<"ss"<<endl;
//    	if(r[i]==r[i+1]&&r[i]==n||r[i]>k+1)
//    	{
//    		fl=1;
//    		break;
//    	}
//    	k++;
//    }
//    	}
   
//    if(fl)
//    {
//    	//cout<<"ssssb"<<endl;
//    	cout<<"NO"<<endl;
//    	return ;
//    }
//    cout<<"YES"<<endl;
	
//    }
   
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		solve();
// 	}
// }	
#include<iostream>

using namespace std;

struct node
{
    int value;
    node* next;
};
node* head = NULL;

bool isempty()
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}

void print_list()
{
    node * current_node = head;
    int index = 0;
    while(current_node!=NULL)
    {
        cout<<"Value:"<<current_node->value<<" Index:"<<index<<endl;
        current_node = current_node->next;
        index++;
    }
}

void print_by_recursion(node *current_node){
    if(current_node!=NULL){
        cout<<current_node->value<<endl;
        print_by_recursion(current_node->next);
    }
}

void print_reverse_by_recursion(node *current_node){
    if(current_node!=NULL){  
        print_by_recursion(current_node->next);
        cout<<current_node->value<<endl;
    }
}

//void print_alternate(){

//}

int count_nodes(){
    int counter = 0;
    if(isempty()==true){
        counter = 0;
    }
    else{
        counter = 0;
        node * current_node = head;
        while(current_node!=NULL){
            current_node = current_node->next;
            counter++;
        }
    }
    return counter;
}

bool search_value(int value)
{
    node * current_node = head;
    while(current_node!=NULL)
    {
        if(current_node->value==value)
        {
            cout<<"match found"<<endl;
            return true;
        }
        current_node = current_node->next;
    }
    cout<<"match not found"<<endl;
    return false;
}

void delete_front(){
    if(isempty()==true){
        cout<<"List is empty"<<endl;
    }
    else {
        node * node_to_deleted = head;
        head = head->next;
        delete node_to_deleted;
    }
}

void delete_last(){
    if(isempty()==true){
        cout<<"List is empty"<<endl;
    }
    else {
        if(head->next==NULL){
            node * node_to_deleted = head;
            head = head->next;
            delete node_to_deleted;
        }
        else {
            node* current_node = head;
            while(current_node->next!=NULL){
                if(current_node->next->next==NULL){
                    node *node_to_be_deleted = current_node->next;
                    current_node->next= node_to_be_deleted->next;
                    delete node_to_be_deleted;
                }
                else {
                    current_node = current_node->next;
                }
            }
        }
    }
}

void delete_at_index(int index){
    if(index==0){
        delete_front();
    }
    else if(index==count_nodes()-1){
        delete_last();
    }
    else if (index>=count_nodes()||index<0){
        cout<<"Invalid Index"<<endl;
    }
    else {
        int counter = 0;
        node* current_node = head;
        while(counter!=index){
            if(counter==index-1){
                node *node_to_be_deleted = current_node->next;
                current_node->next = node_to_be_deleted->next;
                delete node_to_be_deleted;
                return;
            }
            else{
                current_node = current_node->next;
                counter++;
            }
        }
    }
}

void delete_value(int value_to_be_deleted)
{
    if(isempty()==true)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        if(head->value==value_to_be_deleted)
        {
            node *node_to_be_deleted = head;
            head = head->next;
            delete node_to_be_deleted;
        }
        else
        {
            node * current_node = head;
            while(current_node->next!=NULL)
            {
                if(current_node->next->value==value_to_be_deleted)
                {
                    node *node_to_be_deleted = current_node->next;
                    current_node->next = node_to_be_deleted->next;
                    delete node_to_be_deleted;
                    //return;
                }
                else
                {
                    current_node = current_node->next;
                }

            }
        }
    }
}

void insert_front(int new_value){
    node* new_node = new node;
    new_node->value = new_value;
    new_node->next = NULL;

    if(isempty()==true){
        head=new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
}

void insert_last(int value)
{
    node* new_node = new node;
    new_node->value = value;
    new_node->next = NULL;

    if(isempty()==true)
    {
        head = new_node;
    }
    else
    {
        node * current_node = head;
        while(current_node->next!=NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void insert_at_index(int value, int index){
    if(index==0){
        insert_front(value);
    }
    else if(index==count_nodes()){
        insert_last(value);
    }
    else if(index>count_nodes()|| index<0){
        cout<<"Invalid Index"<<endl;
    }
    else {
        node *new_node = new node;
        new_node->value = value;

        int counter = 0;

        node * current_node = head;
        while(counter!=index-1){
            current_node = current_node->next;
            counter++;
        }
        new_node->next = current_node->next;
        current_node->next = new_node;


    }
}


int main()
{
    insert_front(5);
    insert_last(10);
    insert_last(20);
    insert_last(30);
    insert_at_index(50, 2);
    print_list();
    cout<<"Total Nodes:"<<count_nodes()<<endl;
    //search_value(7);
    //delete_value(7);
    delete_front();
    delete_last();
    delete_at_index(1);
    cout<<"after deletion\n";
    print_list();
    cout<<"Total Nodes:"<<count_nodes()<<endl;
    print_by_recursion(head);
}