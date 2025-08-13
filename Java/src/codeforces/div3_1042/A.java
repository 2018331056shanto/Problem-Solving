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
 * <p>Time: 6:52 AM</p>
 */
public class A {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t = fs.nextInt();

        while (t-- > 0) {

            int n = fs.nextInt();
            int[] a = new int[11];
            int[] b = new int[11];

            for (int i = 0; i < n; i++) {
                a[i] = fs.nextInt();
            }
            for (int i = 0; i < n; i++) {
                b[i] = fs.nextInt();
            }
            int ans = 1;

            while (true) {

                boolean flag = false;

                for (int i = 0; i < n; i++) {
                    if (a[i] > b[i]) {
                        a[i]--;
                        ans++;
                        flag = true;

                    } else if (b[i] > a[i]) {
                        a[i]++;

                    }
                }
                if (!flag) {
                    break;
                }
            }
            System.out.println(ans);

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
