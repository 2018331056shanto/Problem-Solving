package main

import (
	"fmt"
	"math"
)

func solve(){
	var n,target int ;

	fmt.Scan(&n,&target);

	var slice[]int;
	for i:=0;i<n;i++{
		
		var x int;
		fmt.Scan(&x);
		slice=append(slice, x);
	}

	var dp[]int;
	for i:=0;i<=target;i++{

		dp=append(dp, math.MaxInt-10)
	}
	dp[0]=0

	for i:=0;i<=target;i++{

		for _,j:=range slice{
			// fmt.Println(j)
			if i-j>=0{
				dp[i]=min(dp[i],1+dp[i-j])
			}
		}
	}

	if dp[target]==math.MaxInt-10{
		fmt.Println(-1)
	}else{
		fmt.Println(dp[target])
	}
}

func main(){

	var test int;
	fmt.Scan(&test);

	for i:=0;i<test;i++{
		solve();
	}

}
