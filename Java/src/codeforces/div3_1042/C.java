package codeforces.div3_1042;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/13/25</p>
 * <p>Time:11:30 AM</p>
 */
public class C {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t = fs.nextInt();

        while (t-- > 0) {

            int n = fs.nextInt();
            int k = fs.nextInt();

            Map<Integer, Integer> map = new HashMap<Integer, Integer>();

            for (int i = 0; i < 2 * n; i++) {

                int x = fs.nextInt();
                int key = Math.min(x % k, k - x % k);
                if (!map.containsKey(key)) {
                    if (i < n)
                        map.put(key, 1);
                    else {
                        map.put(key, -1);
                    }
                } else {
                    if (i < n) {
                        map.put(key, map.get(key) + 1);
                    } else {
                        map.put(key, map.get(key) - 1);
                    }
                }
//                System.out.println(map.get(key));

            }

            boolean flag = true;
            for (var entry : map.entrySet()) {
//                System.out.println(entry.getValue());
                if (entry.getValue() != 0) {
                    flag = false;
                    break;
                }
            }


            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");

            }

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