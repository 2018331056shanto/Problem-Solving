#include<iostream>
using namespace std;
struct node{
 int val;
 node *next;
 /*Constructors in C++
What is constructor?
A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class.

How constructors are different from a normal member function?

A constructor is different from normal functions in following ways:

Constructor has same name as the class itself
Constructors don’t have return type
A constructor is automatically called when an object is created.
If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).*/

 node(){
 val=70;
 }
~node()
{

    cout<<"bye bye!"<<endl;
    delete next;

}
};
int main()
{
    node p;
    delete &p;

    node *p;

    p=new node;
    cout<<"before assign val"<<p->val<<endl;
    p->val=50;
    cout<<"after assign val"<<p->val<<endl;
    return 0;
}
