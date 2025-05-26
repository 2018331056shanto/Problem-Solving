package codeforces.div2_1025;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/26/25</p>
 * <p>Time:6:38 AM</p>
 */
public class C1 {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t = fs.nextInt();
                while (t-- > 0) {
                    System.out.flush();
                    int n = fs.nextInt();

                    System.out.println("digit");
                    int x=fs.nextInt();

                    System.out.println("digit");
                    x=fs.nextInt();

                    for(int i=8;i>=1;i/=2){
                        System.out.println(String.format("add %d", -i));
                        x=fs.nextInt();
                    }

                    System.out.println(String.format("add %d", n-1));
                    x=fs.nextInt();

                    System.out.println("!");
                    x=fs.nextInt();
                    assert (x==1);


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
