#include<bits/stdc++.h>
#define inf (1<<30)
using namespace std;
int partition(int a[],int low,int high)
{
    cout<<"in partition  "<<low<<endl;
    cout<<"in partition  "<<high<<endl;
    bool right=true;
    while(low<high)
    {

        if(a[low]>a[high])
        {
            swap(a[low],a[high]);
            right^=1;
            cout<<"hello intered in while!!"<<endl;


        }
        cout<<"right in condition in partition  "<<right<<endl;
        if(right)
           {


            high--;
            cout<<"high in condition in partition  "<<high<<endl;
           }
        else
            {


            low++;
            cout<<"low in condition in partition  "<<low<<endl;
            }
    }
    return low;


}
void quick(int a[],int beg,int end)
{
    int i=partition(a,beg,end);
    cout<<i<<endl;
    if(beg<end)

    {

        quick(a,beg,i-1);
        cout<<"beg in 1st quick  call  "<<beg<<endl;
        //cout<<a.size()<<endl;
        quick(a,i+1,end);
        cout<<"end in 2nd quick  "<<end<<endl;
       // cout<<a.size()<<endl;
    }



}
int main()
{

    int a[1000];
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
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
