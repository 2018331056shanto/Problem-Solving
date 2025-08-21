package main
import "fmt"


func main(){

	var t int;

	fmt.Scan(&t);

	for t>0{
		
		var n int;

		fmt.Scan(&n);

		arr:=make([]int,n);

		for i:=0;i<n;i++{


			var x int;
			fmt.Scan(&x);

			arr[i]=x;
		}

		ans:=0;

		for i:=0;i<n;i++{

			left:=0;
			right:=0;
			val:=arr[i]

			for j:=0;j<i;j++{

				if arr[j]>val{

					left++;
				}
			}
			for j:=i+1;j<n;j++{
				
				if arr[j]>val{

					right++;
				}
			}

			ans+=min(left,right)

		}
		fmt.Println(ans);

		t--;
	}
}

