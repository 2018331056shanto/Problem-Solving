package codeforces.div2_1025;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/27/25</p>
 * <p>Time:5:42 AM</p>
 */
public class C2 {

        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                int t = fs.nextInt();

                while (t-- > 0) {


                    int n = fs.nextInt();

                    System.out.println(String.format("mul %d",9));
                    int m = fs.nextInt();

                    System.out.println("digit");
                    m= fs.nextInt();

                    System.out.println("digit");
                    m = fs.nextInt();

                    System.out.println(String.format("add %d",n-9));
                    m=fs.nextInt();

                    System.out.println("!");

                    m=fs.nextInt();
                    assert (m==1);
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
