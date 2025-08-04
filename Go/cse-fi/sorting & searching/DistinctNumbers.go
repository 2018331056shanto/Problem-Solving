package main
import "fmt"

func main(){

	mp:=make((map[int]int))

	var n int
	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var x int 
		fmt.Scan(&x)
		mp[x]++
	}
	fmt.Println(len(mp))
}