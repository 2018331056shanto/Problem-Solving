package csefi.range_queries;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/12/25</p>
 * <p>Time:3:27 PM</p>
 */
public class StaticRangeSumQueries {

    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        long n = fs.nextInt();
        long q = fs.nextInt();
        long ans=0;
        for(int i=0;i<n;i++){
            long l=fs.nextInt();

            ans+=l;
        }
        for(int i=0;i<q;i++){
            long x= fs.nextInt();
            long y=fs.nextInt();
        }
        System.out.println(ans);

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
