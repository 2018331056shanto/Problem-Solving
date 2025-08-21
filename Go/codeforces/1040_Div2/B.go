package main
import "fmt"

func main(){

	var t int;
	fmt.Scan(&t);

	for t>0{

		var n,target int;
		fmt.Scan(&n,&target);
		mp:=make(map[int]int);

		sum:=0

		for i:=0;i<n;i++{

			var x int;

			fmt.Scan(&x)

			sum+=x;

			mp[x]++;
		}

		if target<sum{

			print(mp)
		}else{

			if target-sum==1{

				print(mp)
			}else{

				fmt.Println(-1)
			}
		}

		t--;
	}

}

func print( mp map[int]int){


	cnt0:=mp[0];
	cnt1:=mp[1];
	cnt2:=mp[2];

	for i:=0;i<cnt0;i++{
		fmt.Printf("%d ",0)
	}

	for i:=0;i<cnt2;i++{
		fmt.Printf("%d ",2);
	}

	for i:=0;i<cnt1;i++{

		fmt.Printf("%d ",1);
	}

	fmt.Println();


}
