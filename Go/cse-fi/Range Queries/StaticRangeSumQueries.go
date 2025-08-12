package main

import "fmt"


func main(){


	var n,q int; 

	fmt.Scan(&n,&q);

	slice:=make([]int64,n+1)

	for i:=1;i<=n;i++{


		var x int64;
		fmt.Scan(&x);
		slice[i]=x;
	}


	for i:=1;i<=n;i++{

		slice[i]=slice[i-1]+slice[i]
	}


	for i:=0;i<q;i++{

		var x,y int;
		fmt.Scan(&x,&y);

		fmt.Println("ans :",slice[y]-slice[x-1])
	}
}