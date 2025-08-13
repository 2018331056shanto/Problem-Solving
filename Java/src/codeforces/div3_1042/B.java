//package codeforces.div3_1042;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

import static java.lang.Integer.parseInt;
import static java.lang.Long.parseLong;
import static java.lang.System.in;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date: 8/13/25</p>
 * <p>Time: 7:10 AM</p>
 */
public class B {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int t = fs.nextInt();

        while (t-- > 0) {

            int n = fs.nextInt();

            if (n == 2) {
                System.out.println(-1 + " " + 2);
            } else if (n == 3) {
                System.out.println(-1 + " " + 3 + " " + -1);
            } else {
                if (n % 2 == 0) {
                    for (int i = 1; i <= n / 2 - 1; i++) {
                        System.out.print(-1 + " " + 3 + " ");
                    }
                    System.out.println(-1 + " " + 2);
                } else {
                    for (int i = 1; i <= n / 2; i++) {
                        System.out.print(-1 + " " + 3 + " ");
                    }
                    System.out.println(-1);

                }
            }

        }
    }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(in));
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
            return parseInt(next());
        }

        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = nextInt();
            return a;
        }

        long nextLong() {
            return parseLong(next());
        }
    }
}
