#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int x)
    {
         return (x && !(x & (x - 1)));//is a number is a power of 2
    }
    int count_one(int n)
    {
        int count=0;
        while(n)
        {
            n=n&(n-1);//ount 1 in binary representation
            count++;
        }
        return count;


    }
    bool i_th_bit_set(int n,int i)
    {
        if(n&(1<<i))
        return true;//i'th bit is a set or not
        else
        {
            false;
        }
        
    }
    void possibleSubsets(char A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] << " ";
            cout << endl;
    }
    }
int main(
{
     int n,i;
     //cin>>n;
     //int  pre=isPowerOfTwo(n);
     //cout<<pre<<endl;
    // int no_one=count_one(n);
     //cout<<no_one<<endl;
     //cin>>i;
     //bool hmm=i_th_bit_set(n,i);
     //cout<<hmm<<endl;
     char a[1000];
     cin>>a;
     int b;
     cin>>b;
     possibleSubsets(a,b);

}