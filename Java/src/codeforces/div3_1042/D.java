package codeforces.div3_1042;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/13/25</p>
 * <p>Time:3:03 PM</p>
 */
public class D {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();

                while(t-->0){

                    int n=fs.nextInt();

                    var adj=new ArrayList<ArrayList<Integer>>();
                    for(int i=0;i<=n;i++){
                        adj.add(new ArrayList<>());
                    }

                    for(int i=1;i<n;i++){

                        int x=fs.nextInt();
                        int y=fs.nextInt();

                        ArrayList<Integer>list=adj.get(x);
                        System.out.println(x+" :  "+y+" : ");

                        list.add(y);
                        System.out.println("Element "+x);

                        for(int j=0;j<list.size();j++){
                            System.out.print(list.get(j)+"  ");
                        }
                        System.out.println();
                        adj.get(x).add(list);
                    }


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
