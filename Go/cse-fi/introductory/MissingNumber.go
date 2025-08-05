package main

import (
	"fmt"
	"sort"
)

func main(){


	var n int;
	fmt.Scan(&n);

	var slice[]int;

	for i:=0;i<n-1;i++{

		var x int;
		fmt.Scan(&x);
		slice=append(slice,x)
	}

	missingNumber:=1;

	sort.Ints(slice)

	

	for _,i:=range slice{

		// fmt.Println(i)
		if i!=missingNumber{
			break;
		}
		missingNumber++
	}

	fmt.Println(missingNumber)
}
