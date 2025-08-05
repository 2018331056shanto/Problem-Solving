package csefi.dynamicProgramming;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/5/25</p>
 * <p>Time:10:57 AM</p>
 */
public class MinimizingCoins {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int n = fs.nextInt();
        int target = fs.nextInt();

        ArrayList<Integer> arr = new ArrayList<>();


        for (int i = 0; i < n; i++) {
            arr.add(fs.nextInt());
        }


        int []dp=new int[target+1];
        for(int i=0;i<=target;i++){
            dp[i]=Integer.MAX_VALUE-10;
        }

        dp[0]=0;
        for(int i=1;i<=target;i++){

            for(var c:arr){
                if(i-c>=0)
                    dp[i]=Math.min(dp[i],dp[i-c]+1);
        }
//            dp[i]=ans;
        }
        System.out.println(dp[target]==Integer.MAX_VALUE-10?-1:dp[target]);


//        int ans = backTrack(arr, target, 0);
//
//        System.out.println(ans==2147473647?-1:ans);

    }

//    static int backTrack(ArrayList<Integer> arr, int target, int pos) {
//
//        if (target < 0 || pos >= arr.size()) {
//            return Integer.MAX_VALUE - 2;
//        }
//        if(dp[target][pos]!=0){
//            return dp[target][pos];
//        }
//        if (target == 0) {
//            return 0;
//        }
//
//        int ans = Integer.MAX_VALUE - 10000;
//
//        ans = Math.min(ans, 1 + backTrack(arr, target - arr.get(pos), pos));
//        ans = Math.min(ans, backTrack(arr, target, pos + 1));
//
//        return  dp[target][pos]=ans;
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
