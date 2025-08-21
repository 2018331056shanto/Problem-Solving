package main;
import "fmt"

func main(){


	var t int;

	fmt.Scan(&t);

	for t>0{

		mp:=make(map[int]int);
		ans:=0;
		var n int
		fmt.Scan(&n)
		for i:=0;i<n;i++{
			
			var x int;
			fmt.Scan(&x)
			ans+=x;
			mp[x]++;
		}

		_,exists:=mp[0]

		if !exists{
			fmt.Println(ans)
		}else{
			ans+=mp[0]
			fmt.Println(ans)
		}

		t-=1;
	}
}
