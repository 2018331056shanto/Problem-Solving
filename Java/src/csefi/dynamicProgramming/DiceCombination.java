package csefi.dynamicProgramming;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/4/25</p>
 * <p>Time:7:16 AM</p>
 */
public class DiceCombination {
    static final int mod = (int) (1e9) + 7;
//    static ArrayList<Integer> dice = new ArrayList<>();

    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int n = fs.nextInt();
//
//        for(int i=0;i<=n+1;i++){
//            dice.add(0);
//        }
//        int ans = backTrack(n);

//        System.out.println(ans);
        int[] dp = new int[n + 2];
        dp[0] = 1;

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= 6; j++) {
                if (i - j >= 0) {
                    dp[i] = (dp[i] + dp[i - j]) % mod;
                }
            }
        }
        System.out.println(dp[n]);

    }

//
//    static int backTrack(int n) {
//
//
//        if (n < 0) {
//            return 0;
//        }
//        if(dice.get(n)!=0){
//            return dice.get(n);
//        }
//        if (n == 0) {
//            return 1;
//        }
//        int ans = 0;
//        for (int i = 1; i <= 6; i++) {
//            ans = (ans%mod+backTrack(n - i)%mod)%mod;
//        }
//        dice.add(n,ans);
//        return ans;
//
//
//    }

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
