#include<bits/stdc++.h>
using namespace std;
int find_index(int a[],int v,int sz);
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int n,s,k;
      cin>>n>>s>>k;

      //int a[k+10];
      int sum[k+10];
      for(int j=1;j<=k;j++)
      {
          cin>>sum[j];
          //sum[j]=abs(s-a[j]);
      }
      sort(sum+1,sum+k+1);
    int flag=find_index(sum,s,k);
    cout<<flag<<endl;
      if(!flag)
      {
          cout<<flag<<endl;
          continue;
      }
      //cout<<flag<<endl;
      int indicator1=sum[flag],indicator2=sum[flag];
      for(int j=flag;j>=1;)
      {

          if(indicator1!=sum[j])
          {

              break;
          }

          indicator1-=1;
          j-=1;
      }
      for(int j=flag;j<=k;)
      {

          if(indicator2!=sum[j])
          {

              break;
          }
          indicator2++;
          j++;
      }
//       cout<<indicator2<<endl;
//         cout<<indicator1<<endl;
      if(indicator1<1)
        cout<<indicator2-sum[flag]<<endl;
      else if(indicator2>n)
      {
          cout<<sum[flag]-indicator1<<endl;
      }
      else if((indicator2-sum[flag])>=(sum[flag]-indicator1))
      {
          cout<<sum[flag]-indicator1<<endl;
      }
      else
        cout<<indicator2-sum[flag];

    }
}
int find_index(int a[],int v,int sz)
{
    int beg=1,nd=sz;
    int index=1,mid;
    while(beg<=nd)
    {
        mid=(beg+nd)/2;
        if(v==a[mid])
        {
            index=0;
            return mid;
        }
       else if(v>a[mid])
        {
            beg=mid+1;
        }
        else if(v<a[mid])
        {
            nd=mid-1;
        }
    }
    if (index)
        return 0;
}
