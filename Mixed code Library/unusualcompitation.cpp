#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0,count3=0;
    cin>>n;
    string s;
    cin>>s;
     for(int j=0;j<s.size();j++)
    {
        if(s[j]=='('&&s[j+1]==')')
        {
            count1++;
        }
        if(s[j]=='(')
            {
                count2++;
            }
            else
                count3++;
                //cout<<count2<<endl<<count3<<endl;


    }
    if(count2!=count3)
        cout<<"-1"<<endl;
    else
    {
        cout<<(count3-count1)*2<<endl;
    }
}
