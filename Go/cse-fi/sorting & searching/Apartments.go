package main

import (
	"fmt"
	"sort"
)

func main(){

	var n,m,k int;
	fmt.Scan(&n,&m,&k);

	desiredApartments:=make([]int,n);
	availableApartments:=make([]int,m);

	for i:=range n{
		
		fmt.Scan(&desiredApartments[i])
	}
	for i:=range m{

		fmt.Scan(&availableApartments[i]);
	}

	sort.Ints(desiredApartments)
	sort.Ints(availableApartments)

	i:=0;
	j:=0;
	ans:=0;

	for i<n&&j<m{

		dap:=desiredApartments[i];
		aap:=availableApartments[j];

		if aap<dap{
			if aap>=dap-k{

				i++;
				j++;
				ans++;

			}else{
				j++;
			}
		} else if aap>dap {
			if aap<=dap+k{
				i++;
				j++;
				ans++;
			}else{
				i++;
			}
		}else{
			i++;
			j++;
			ans++;
		}

	}
	fmt.Println(ans)

}