#include<bits/stdc++.h>

using namespace std;



bool canFormSticks(vector<int>&v,vector<bool>&used,int idx,int curLen,int len,int total) {
    if (total==0)
    {
    
    	return true;

    } 
    if (curLen == len)
    {

        return canFormSticks(v,used,0,0,len,total-1);
    }

    for (int i=idx;i<v.size();i++) {

        if (!used[i]&&curLen+v[i]<=len) {

            used[i] = true;

            if (canFormSticks(v,used,i+1,curLen+v[i],len,total))
            {


                return true;

            }
            used[i] = false;

            if (curLen==0) return false; 
        }
    }
    return false;
}


int findOriginalLength(vector<int>&v)
{


	int n=v.size();

	int totalLength=0;


	for(int i=0;i<n;i++)
	{
		totalLength+=v[i];
	}

	sort(v.begin(),v.end());


	 for (int len=v[0];len<=totalLength;len++) {
        if (totalLength%len==0) { 
            int totalSticks = totalLength/len;
            vector<bool>used(v.size(),false);
            if (canFormSticks(v,used,0,0,len,totalSticks))
                return len;
        }
    }
    return  totalLength; 
}

void solve(int n){
	

	vector<int>v(n);


	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}


	cout<<findOriginalLength(v)<<endl;


	


}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// int t;
	// cin>>t; 


	while(true){

		int n; 
		cin>>n; 

		if(n==0)
			break;

		solve(n);
	}
}




