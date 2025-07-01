package codeforces.edu_div2_180;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:6/29/25</p>
 * <p>Time:6:27 AM</p>
 */
public class A {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();

                while(t-->0){
                    int a=fs.nextInt();
                    int x=fs.nextInt();
                    int y=fs.nextInt();

                    System.out.println((a<x)==(a<y)?"YES":"NO");
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
