/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
   string s;
   stack<double>st;
   double n;
   ll num;
   while(cin>>s)
   {
       for(ll i=0;i<s.size();i++)
       {
           if(isdigit(s[i]))
           {
               num=0;
               while(isdigit(s[i]))
               {
                   num=num*10+s[i]-'0';
                   i++;
               }
               i--;
               n=sqrt(num*1.00);
               st.push(n);
           }
       }
   }
   while(!st.empty())
   {
       printf("%.4f\n",st.top());
       st.pop();
   }

    return 0;
}
/*   --------------------
    |      SOHAN       |
    |   Chandler68     |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/
