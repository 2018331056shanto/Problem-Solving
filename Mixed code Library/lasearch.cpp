#include<iostream>
using namespace std;
int find_element(int arr[],int n,int key);
int main()
{

    int n,i,f,p,a[200];
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"enter the finding element"<<endl;
    cin>>f;
    p=find_element(a,n,f);
    if(p==-1)
        cout<<"did not find";
    else
     cout<<"position"
     <<p+1;
     return 0;

}
int find_element(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {

        if(arr[i]==key)
            return i;
        else
            return -1;
    }

}
