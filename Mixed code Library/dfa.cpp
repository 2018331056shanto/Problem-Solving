#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};

struct SinglyLinkedList{
    node *head,*tail;
    SinglyLinkedList();
    ~SinglyLinkedList();
    void enqueue(int x);
    int dequeue();
    void printList();
};

SinglyLinkedList::SinglyLinkedList(){
        head = tail = NULL;
        cout << "Singly Linked List initiated\n";
}

SinglyLinkedList::~SinglyLinkedList(){
        cout << "Oh! You killed me!\n";
}

void SinglyLinkedList::enqueue(int x){
    node *cur;
    cur = new node;
    cur->val = x;
    cur->next = NULL;
    cout << x <<" is enqueued!\n";
    if(head==NULL && tail==NULL){
        head = tail = cur;
        return;
    }
    tail->next = cur;
    tail = tail->next; /// tail = cur;
}
int SinglyLinkedList::dequeue(){
    if(head == NULL && tail == NULL){
        cout << "Underflow!\n";
        return -1;
    }
    node *cur = head;
    int x = cur->val;
    cout << x <<" is dequeued!\n";
    if(head == tail){
        head = tail = NULL;
    }
    else head = head->next;
    delete cur;
    return x;
}
void SinglyLinkedList::printList(){
    cout << "SinglyLinkedList - Start\n";
    node *cur = head;
    while(cur!=NULL)
    {
        cout << cur->val << endl;
        cur =  cur->next;
    }
    cout << "SinglyLinkedList - End\n";
}
int main()
{
    SinglyLinkedList sl;sl.printList();
    sl.enqueue(35);sl.printList();
    sl.enqueue(46);sl.printList();
    sl.enqueue(98);sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    sl.enqueue(445);sl.printList();
    sl.dequeue();sl.printList();
    sl.enqueue(7);sl.printList();
    sl.enqueue(75);sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    sl.dequeue();sl.printList();
    return 0;
}
