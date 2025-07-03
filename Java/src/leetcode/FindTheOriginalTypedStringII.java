package leetcode;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/2/25</p>
 * <p>Time:10:30 PM</p>
 */
public class FindTheOriginalTypedStringII {

     private static final int MOD=1000000007;
     static int possibleStringCount(String word, int k) {

         if(word.length()==k)
             return 1;
         Map<Character, Integer> map = new HashMap<>();
         for(Character ch : word.toCharArray()){
             map.merge(ch, 1, Integer::sum);
         }

         int totalWays=1;

         for(Map.Entry<Character, Integer> entry : map.entrySet()){
             totalWays=((totalWays%MOD)*entry.getValue()%MOD)%MOD;
         }
         if(map.size()>=k)
         {
             return totalWays;
         }

         int [] dp=new int[k];
         int [] prefixSum=new int[k];
         dp[0]=1;
         Arrays.fill(prefixSum,1);

         for(Map.Entry<Character, Integer> entry : map.entrySet()){
             int groupSize=entry.getValue();
             int [] newDp=new int[k];
             for(int i=1;i<k;i++){
                 newDp[i]=prefixSum[i-1];
                 if(i-groupSize-1>=0){
                     newDp[i]=(newDp[i] -prefixSum[i-groupSize-1]+MOD)%MOD;
                 }
             }
             int [] newPrefix=new int[k];

             newPrefix[0]=newDp[0];
             for(int i=1;i<k;i++){
                 newPrefix[i]=(newPrefix[i-1]+newDp[i])%MOD;
             }
             dp=newDp;
             prefixSum=newPrefix;
         }
        return (int) (totalWays-prefixSum[k-1]+MOD)%MOD;



    }
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

            System.out.println( possibleStringCount(fs.next(), fs.nextInt()));

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

//aaabbb k=3
//
//aaabbbb;
//aaabb;
//aaab;
//aabbb;
//aabb;
//aab;
//abbbb;
//abb;
//
////We can't remove any letter;
//
//
//aaaabbbbccccdddd  k=4;
//a -> 4;
//b -> 4
//c -> 4;
//d -> 4;
//
//
//2^3*2^3
//
//2^12
//
//
//4*3=12
//
//aaabbbbccccdddd
//aaabbbbccccddd;
//abbbbccccdddd;



