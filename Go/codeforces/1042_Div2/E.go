package main;
import "fmt"

func main(){



	var t int;
	fmt.Scan(&t);

	for t>0{
	   
		var n int;
		fmt.Scan(&n);

		a:=make([]int,n)
		b:=make([]int,n)

		for i:=range n{
		

			fmt.Scan(&a[i])
		}
		for i:=range n{

			fmt.Scan(&b[i]);
		}

		if a[n-1]!=b[n-1]{
			fmt.Println("No");
		}else{

			 flag:=true;
			for i:=n-2;i>=0;i--{
		
				if a[i]==b[i]||a[i]^a[i+1]==b[i]||a[i]^b[i+1]==b[i]{
					continue;
				}
				flag=false;
				break;
			}

			if flag==true{

				fmt.Println("Yes");
			}else{
				fmt.Println("No")
			}


		}

		t=t-1;
	}

}
