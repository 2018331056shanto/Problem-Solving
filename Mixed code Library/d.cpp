#include<iostream>
using namespace std;
int avg=0;
int cnt=1;
struct Customer
{
    string name;
    double income;
    Customer *prev,*next;
    Customer(string nm,double in)
    {
        name=nm;
        income=in;
        prev=next=NULL;
    }
};
void bubbleSort(Customer *start)
{
    /*here we are creating two Customer node. we are using loop  until we find next==NULL.
    We are using two while loop .First we are checking if next pointer is NULL. If not we
    are comparing this node and next node's name's first letter.
    IF this node->name[0]>Next node->name[0] we are swapping these two names.
    And we are checking it for every element in the list*/
    int swapped, i;
    Customer *ptr1;
    Customer *lptr = NULL;
    if (start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = start;
        while (ptr1->next != lptr)
        {
            if (ptr1->name[0] > ptr1->next->name[0])
            {
                swap(ptr1->name, ptr1->next->name);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}
struct doublyLinkedList
{
    Customer *head,*tail;
    doublyLinkedList();
    void insert_customer(string name,double income);
    void printList();
    void sort_customer();
    void show_last_customer();
    void calculate_avg_income();
};
doublyLinkedList::doublyLinkedList()
{
    head=tail=NULL;
}
void doublyLinkedList::sort_customer()
{
    /*
     we are using bubble sort to sort the linked list
     we are passing head node as argument in bubble sort

    */
    bubbleSort(head);
}
void doublyLinkedList::show_last_customer()
{
    /*we are creating variable last and it's data type is Customer Then we are storing
    address of head in last. Then we are checking untill we found last's next node NULL .
    After we found the last node we are printing last node's "name" and "income"*/
    Customer *last;
    last=head;
    if(last)
    {
        while(last->next)
        {
            last=last->next;
        }
        cout<<"Last Customer :"<<last->name<<","<<last->income<<endl;
    }
}
void doublyLinkedList::calculate_avg_income()
{
    /*we are creating a variable start and storing the head of the linked list. Then we are
    checking if start is NULL.If not NUll we are using a while loop to loop over all the
    elements in the linked list.While looping over all the element we are summing the value
    of all the income. avg+=start->income then we are dividing summation of income by number of node*/
    Customer *start;
    start=head;
    if(start)
    {
        while(start->next)
        {
            avg+=start->income;
            start=start->next;
            cnt++;
        }
    }
    avg+=start->income;
    cout<<"Average income :"<<avg/cnt<<endl;
}
void doublyLinkedList::insert_customer(string name,double income)
{
    /*
      we are inserting element at tail.First we are creating a new Customer name cur and
      we are passing two argument "name" and "income" in the constructor.It's initializing the
      Customer structure then we are checking if head and tail are NULL..If NULL return
      If not NULL we are storing the address of tail in current's prev node
      And we are making tail's next current.
      And then making tail=current node*/
    Customer *current_customer=new Customer(name,income);
    if(head==NULL&&tail==NULL)
    {
        head=tail=current_customer;
        return;
    }
    current_customer->prev=tail;
    tail->next=current_customer;
    tail=current_customer;
}
void doublyLinkedList::printList()
{
    cout<<"List of Customer in Sorted Order :"<<endl;
    Customer *current_customer = head;
    while(current_customer!=NULL)
    {
        cout << current_customer->name << endl;
        current_customer =  current_customer->next;
    }
}
int main()
{
    doublyLinkedList d;
    d.insert_customer("Rahim",1200);
    d.insert_customer("Karim",1500);
    d.insert_customer("Jamal",1000);
    d.insert_customer("Nafis",1300);
    d.show_last_customer();
    d.sort_customer();
    d.printList();
    d.calculate_avg_income();
}