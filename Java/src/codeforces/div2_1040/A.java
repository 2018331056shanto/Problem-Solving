//package codeforces.div2_1040;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Hashtable;
import java.util.Map;
import java.util.StringTokenizer;

import static java.lang.Integer.parseInt;
import static java.lang.Long.parseLong;
import static java.lang.System.in;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date: 8/14/25</p>
 * <p>Time: 6:37 AM</p>
 */
public class A {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t=fs.nextInt();

        while(t-->0) {

            int n = fs.nextInt();
            Map<Integer, Integer> map = new Hashtable<>();
            int ans=0;
            for(int i=0;i<n;i++){
                int x=fs.nextInt();
                ans+=x;
                map.put(x,map.getOrDefault(x,0)+1);
            }

            if(!map.containsKey(0)){
                System.out.println(ans);
            }else {

                ans+=map.get(0);
                System.out.println(ans);
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
