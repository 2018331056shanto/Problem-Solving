class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       map<int,int>mp;
       for(int i=0;i<tasks.size();i++)
       {
           mp[tasks[i]]++;
       }
       int ans=0;
       for(auto y:mp)
       {
           int x=y.second;
           if(x<2)
           {
               return -1;
           }
           
           if(x%3==0)
           {
               ans+=x/3;
           }
           else{

               int l=x%3;
               if(l%2==0)
               {
                   ans+=(x/3)+(l/2);
               }
               else
               {
                   if(x==4)
                   {
                       ans+=2;
                   }
                   else
                   {
                       ans+=(x/3)-1+2;
                   }
               }
           }

           
         

       }
       return ans;
    }
};