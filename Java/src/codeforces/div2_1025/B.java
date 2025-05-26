package codeforces.div2_1025;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/25/25</p>
 * <p>Time:6:05 AM</p>
 */
public class B {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                int t = fs.nextInt();
                while (t-- > 0) {

                    int n = fs.nextInt();
                    int m = fs.nextInt();

                    int x = fs.nextInt();
                    int y = fs.nextInt();

                    if((n+1-x)<x)
                        x=n+1-x;
                    if (m+1-y<y)
                        y=m+1-y;

                    System.out.println(Math.min(1+turn(n)+turn(y),1+turn(m)+turn(x)));

                }

            }

            public static int turn(int n){

            int cnt=0;
                while (n>1){
                    n=(n+1)/2;
                    cnt++;
                }
                return cnt;
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
