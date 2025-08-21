//package codeforces.div2_1040;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/21/25</p>
 * <p>Time:2:23 PM</p>
 */
public class D {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int t = fs.nextInt();

        while (t-- > 0) {
            int n = fs.nextInt();
            ArrayList<Integer> arr = new ArrayList<>();

            for (int i = 0; i < n; i++) {

                arr.add(fs.nextInt());
            }
            int ans = 0;

            for (int i = 0; i < n; i++) {

                int left = 0;
                int right = 0;

                int val = arr.get(i);
                for (int j = 0; j < i; j++) {

                    if (arr.get(j) > val) {
                        left++;
                    }
                }

                for (int j = i + 1; j < n; j++) {
                    if (arr.get(j) > val) {
                        right++;
                    }
                }

                ans += Math.min(left, right);
            }

            System.out.println(ans);
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
