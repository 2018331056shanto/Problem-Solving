package main

import "fmt"
func main(){

	var n int64
	fmt.Scan(&n)

	for n!=1{

		if n%2==0{
			fmt.Printf("%d ",n)
			
			n/=2
		}else {
			fmt.Printf("%d ",n)
			n=n*3+1
			
		}
	}
	fmt.Println(1)

}