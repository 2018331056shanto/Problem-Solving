package main

import "fmt"

func main(){
	var n int ;

	fmt.Scan(&n);

	dp:=make([]int,n+1);

	for i:=range dp{
		dp[i]=-1
	}

	ans:=backTrack(n,dp);
	fmt.Println(ans)
}

func backTrack(n int, dp[]int  ) int {

	if n<0{
		return 0;
	}
	if(dp[n]!=-1){
		return  dp[n]
	}
	if n==0{
		return 1
	}

	ans:=0;
	for i:=1;i<=6;i++{
		ans=ans+backTrack(n-i,dp)
	}

	dp[n]=ans
	return ans
	
}