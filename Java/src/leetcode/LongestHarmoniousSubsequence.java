package leetcode;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:6/30/25</p>
 * <p>Time:11:46 AM</p>
 */
public class LongestHarmoniousSubsequence {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                int n=fs.nextInt();
                int []arr=new int[n];

                for(int i=0;i<n;i++){
                    arr[i]=fs.nextInt();

                }

                findLHS(arr);

            }

            static void findLHS(int [] arr){
                Map<Integer,Integer> map=new HashMap<>();
                for(int num:arr){

                    map.merge(num,1,Integer::sum);

                }

                int ans=0;

                for(Map.Entry<Integer,Integer> entry:map.entrySet()){

                    if(map.containsKey(entry.getKey()+1)){
                        ans=Math.max(ans, entry.getValue()+map.get(entry.getKey()+1));
                    }
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
