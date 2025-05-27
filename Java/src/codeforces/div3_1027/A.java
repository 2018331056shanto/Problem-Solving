package codeforces.div3_1027;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/27/25</p>
 * <p>Time:5:56 AM</p>
 */
public class A {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                int t = fs.nextInt();
                while (t-- > 0) {

                    int n = fs.nextInt();

                    boolean flag = false;
                    for(int i=0;i<=100;i++)
                    {
                        for(int j=0;j<=100;j++){

                            if(((i+j)*(i+j))==n){
                                System.out.println(String.format("%d %d", i, j));
                                flag = true;
                                break;

                            }
                        }
                        if(flag) break;
                    }

                    if(!flag)
                    System.out.println(-1);
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
