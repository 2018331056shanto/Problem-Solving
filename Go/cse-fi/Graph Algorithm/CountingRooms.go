package main

import "fmt"

var vis [10002][10002] int;

func main(){


	var n,m int ;

	fmt.Scan(&n,&m);

	graph:=make([]string,n);

	for i:=range n{

		fmt.Scan(&graph[i]);
		// fmt.Println("Print :",graph[i]);
	}


	ans:=0;
	for i:=0;i<n;i++{

		for j:=0;j<m;j++{

			if vis[i][j]==0&&graph[i][j]=='.'{
				getRooms(graph,i,j,n,m);
				ans++;
			}

		}
	}
	fmt.Println(ans)

}

type Pair struct{
	x int;
	y int;

}

func getRooms(graph []string,i int, j int, n int, m int){

	var stack [] Pair;

	dx:=[4]int{1,0,-1,0};
	dy:=[4]int{0,1,0,-1};

	stack=append(stack,Pair{x:i,y: j});
	
	for len(stack)!=0{

		// fmt.Println("Length: ",len(stack))


		p:=stack[len(stack)-1];
		stack=stack[0:len(stack)-1];
		// fmt.Println(stack)


		if p.x<0||p.x>=n||p.y<0||p.y>=m || vis[p.x][p.y]!=0||graph[p.x][p.y]!='.'{
			continue;
		}

		vis[p.x][p.y]=1;
		
		for d:=range 4{

			nx:=p.x+dx[d];
			ny:=p.y+dy[d];

			stack=append(stack, Pair{x:nx,y:ny});
		}

	}

	
	
}