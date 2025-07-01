package codeforces.edu_div2_180;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/1/25</p>
 * <p>Time:5:37 AM</p>
 */
public class D {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();
                while(t-->0){

                    int n=fs.nextInt();
                    ArrayList<ArrayList<Integer>> adj=new ArrayList<>();

                    for(int i=0;i<n;i++){
                        adj.add(new ArrayList<>());
                    }

                    for(int i=0;i<n-1;i++){

                        int x=fs.nextInt();
                        int y=fs.nextInt();

                        --x;
                        --y;
                        adj.get(x).add(y);
                        adj.get(y).add(x);
                    }

                    int index=-1;

                    for(int i=0;i<n;i++){
                        if(adj.get(i).size()==2){

                            index=i;

                            break;
                        }
                    }

                if(index!=-1){


                    System.out.println("YES");
                    System.out.printf("%d %d%n",index+1,adj.get(index).getFirst()+1);
                    dfs(adj,adj.get(index).getFirst(),index,false);
                    dfs(adj,adj.get(index).get(1),index,true);


                    }else {
                        System.out.println("NO");
                    }
                }

            }

            static void dfs(ArrayList<ArrayList<Integer>> adj,int node,int parent,boolean color){

                for(Integer num:adj.get(node)){

                    if(color){
                        System.out.printf("%d %d%n",node+1,num+1);
                    }
                    if(num.equals(parent)){
                        continue;
                    }
                    dfs(adj,num,node,!color);

                }
            }
            static class FastScanner {
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                StringTokenizer st = new StringTokenizer("");

                String next() {
                    while (!st.hasMoreTokens()) try {
                        st = new StringTokenizer(br.readLine());
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                    return st.nextToken();
                }

                int nextInt() {
                    return Integer.parseInt(next());
                }

                int[] readArray(int n) {
                    int[] a = new int[n];
                    for (int i = 0; i < n; i++)
                        a[i] = nextInt();
                    return a;
                }

                long nextLong() {
                    return Long.parseLong(next());
                }
            }
}
