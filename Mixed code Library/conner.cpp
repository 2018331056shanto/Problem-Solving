#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int h,int s)
{
    //cout<<s<<endl;
    //cout<<l<<endl;
    //cout<<h<<endl;
    while(l<=h)
    {


    int mid=l+((h-l));
    //cout<<mid<<endl;
    if(a[mid]==s)
    {
        //cout<<mid<<endl;
          return mid+1;
    }

    else if(s>a[mid])
    {
        l=mid+1;
    }
    else if(s<a[mid])
    {
        h=mid-1;
    }

    }
    return -1;



}
int main()
{
    int t,n,s,k;
    int steps1=1;
    int steps2=1;
    int a[100000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>a[j];
        }
        sort(a,a+k);
        /*for(int l=0;l<k;l++)
        {
            cout<<a[l]<<endl;
        }*/
        int m=binary(a,0,k-1,s);
        if(m==-1)
            cout<<"0"<<endl;
            else
            {
                for(int x=m;x<=a[m+1]-a[m];x++)
                {
                    if(a[x+1]-a[x]==1)
                    {
                        steps1++;
                        m+=1;
                    }
                    else
                        break;


                }
                cout<<steps1<<endl;




            }
    }
    return 0;
}
