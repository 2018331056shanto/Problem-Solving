
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
    public:
      void add(ListNode **head,int val)
        {
            ListNode* new_node = new ListNode();
   
            ListNode *last = *head;
    
        new_node->val =val; 

         new_node->next = NULL; 

    if (*head == NULL) 
    { 
        *head = new_node; 
        return; 
    } 
   
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    last->next = new_node; 
    return; 
        }
public:
void print(ListNode*& head)
{
    ListNode* temp = head;
    int xx=0;
    while (temp != NULL) {
        cout << temp->val << " -> "; 
         xx=temp->val;
        temp = temp->next;
      
    }
    if(xx==0)
    {
        // add(&head,1);
        cout<<"Hello zero"<<endl;
    }
    cout << "NULL" << endl;
}
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

       
        vector<int>a,b;
        ListNode * cur;
        cur=l1;
        while(cur->next!=NULL)
        {
            a.push_back(cur->val);
            cur=cur->next;
        }
        a.push_back(cur->val);
        
        cur=l2;
        while(cur->next!=NULL)
        {
            b.push_back(cur->val);
            cur=cur->next;
        }
        b.push_back(cur->val);

        if(a.size()<b.size())
        {
            swap(a,b);
        }

        ListNode* ans=NULL;
        int carry=0;
        for(int i=0;i<b.size();i++)
        {

            int x=b[i];
            int y=a[i];
            int sum=x+y+carry;
            cout<<"sum :"<<sum<<endl;
            add(&ans,sum%10);
            if(a.size()==b.size()&&i==a.size()-1)
            {
                if(sum>=10)
                {
                    add(&ans,1);
                }
            }
           

            if(sum>=10)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
            
            
        }
        for(int i=b.size();i<a.size();i++)
        {
            int sum=a[i]+carry;
            cout<<"sum :"<<sum<<endl;
        if(i==a.size()-1)
            {
                add(&ans,sum%10);
                if(sum>=10)
                {
                     add(&ans,sum/10);
                }
               
            }
            else
            {
                add(&ans,sum%10);
            }
            
            if(sum>=10)
            {
                carry=1;

            }
            else
            {
                carry=0;
            }
           
        }
      
        // add(&ans,2);

        // add(&ans,6);
        print(ans);
      
        return ans;
    }
  
};