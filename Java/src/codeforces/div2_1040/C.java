//package codeforces.div2_1040;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/14/25</p>
 * <p>Time:12:43 PM</p>
 */
public class C {

    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int t = fs.nextInt();
        while (t-- > 0) {

            int n = fs.nextInt();
            ArrayList<Pair> pairs = new ArrayList<Pair>();
            for (int i = 0; i < n; i++) {
                int x = fs.nextInt();
                int y = fs.nextInt();

                pairs.add(new Pair(x, y, i));
            }

            pairs.sort(Comparator.comparingInt((Pair p) -> p.a)
                    .thenComparing((Pair p) -> p.b, Comparator.reverseOrder()));


//            for (var x : pairs) {
//                System.out.println(x.a + " " + x.b + " " + x.index);
//            }

            int mn = Integer.MIN_VALUE;

            ArrayList<Integer> ans = new ArrayList<>();
            for (var x : pairs) {

                if (x.a > mn) {
                    mn = x.a;
                    ans.add(x.index + 1);
                }

            }
            System.out.println(ans.size());
            for (var x : ans) {
                System.out.print(x + " ");
            }
            System.out.println();


        }


    }


    static class Pair {
        int a;
        int b;
        int index;

        Pair(int a, int b, int index) {
            this.a = a;
            this.b = b;
            this.index = index;
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
