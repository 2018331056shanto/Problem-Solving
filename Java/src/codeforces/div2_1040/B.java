package codeforces.div2_1040;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/14/25</p>
 * <p>Time:10:54 AM</p>
 */
public class B {

    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t = fs.nextInt();

        while (t-- > 0) {

            int n = fs.nextInt();
            int target = fs.nextInt();


            Map<Integer, Integer> map = new HashMap<>();

            int sum = 0;

            for (int i = 0; i < n; i++) {
                int x = fs.nextInt();

                sum += x;

                map.put(x, map.getOrDefault(x, 0) + 1);
            }

            if (target < sum) {
                print(map);

            } else {

                if (target - sum == 1) {
                    print(map);
                } else {
                    System.out.println(-1);
                }

            }
        }

    }

    private static void print(Map<Integer, Integer> map) {
        int cnt0 = map.get(0);
        int cnt1 = map.get(1);
        int cnt2 = map.get(2);

        for (int i = 0; i < cnt0; i++) {
            System.out.print(0 + " ");
        }
        for (int i = 0; i < cnt2; i++) {
            System.out.print(2 + " ");
        }
        for (int i = 0; i < cnt1; i++) {
            System.out.print(1 + " ");
        }

        System.out.println();
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
