/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[1000];
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(i=1;i<=n;i++)
    {

        cout<<a[i]<<endl;
    }
    return 0;
}
*/
/*
//using array
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{

    int i,j;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-1;j++)
        {

            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
int main()
{

    int n;
    int a[]={3,325,352,3,73,257,34,89,945,62,595,5683,24,264,56};
    n=sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);

    return 0;
 */
#include<bits/stdc++.h>
using namespace std;
void bubble(int n,int a[])
{
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-1;k++)
        {
            if(a[k]>a[k+1])
                swap(a[k],a[k+1]);
        }
    }
    for(int l=0;l<n;l++)
        cout<<a[l]<<" ";
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubble(n,a);
    return 0;
}