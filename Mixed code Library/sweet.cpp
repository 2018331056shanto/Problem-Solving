#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high)
{

    bool right =true;
    while(low<high)
    {


    if(a[low]>a[high])
    {

        swap(a[low],a[high]);
        right^=1;

    }
    if(right)
        high--;
    else
        low++;
    }
    return low;
}
void quick(int a[],int beg,int end)
{
    int i=partition(a,beg,end);
    if(beg<end)
    {

        quick(a,beg,i-1);
        quick(a,i+1,end);
    }
}
int main()
{

    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    quick(a,0,n-1);
    for(int j=0;j<n;j++)
    {

        cout<<a[j]<<" ";
    }
    return 0;

}
