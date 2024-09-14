#include<bits/stdc++.h>
using namespace std;
bool prime[1000001 + 1]; 

void SieveOfEratosthenes(int n) 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[1]=false;
   

  
    for (int p = 2; p * p <= n; p++) { 
       
        if (prime[p] == true) { 
           
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
} 

int main() {
	// your code goes here
	int t;
	cin>>t;
	SieveOfEratosthenes(1000001);
	while(t--)
	{
	    int h,i,j,p=1;
	    cin>>h;
	    if(prime[h])
	    {
	        cout<<1<<endl;
	        continue;
	    }
	    for(i=1;;i++)
	    {
	        j=pow(2,i)-1;
	        if(j>h)
	        break;
	        if(j==h)
	        {
	            cout<<i<<endl;
	            p=0;
	            break;
	        }
	        if(prime[h-j] && h>j)
	        {
	            //cout<<j<<endl;
	            cout<<i+1<<endl;
	            p=0;
	            break;
	        }

	        
	    }
	    if(p)
	    cout<<"-1"<<endl;
	    
	}
	
	return 0;
}