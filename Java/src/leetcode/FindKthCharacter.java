package leetcode;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/3/25</p>
 * <p>Time:7:20 AM</p>
 */
public class FindKthCharacter {
     static char kthCharacter(int k) {
         StringBuilder initial= new StringBuilder("a");

         while (initial.length()<=k){

             StringBuilder s= new StringBuilder();

             for(Character ch: initial.toString().toCharArray()){

                 int x=ch-'a'+1;
                 x%=26;
                 char newC= (char) ('a'+x);
                 s.append(newC);
             }
             initial.append(s);

         }
         return initial.charAt(k-1);
    }
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
            System.out.println(kthCharacter(fs.nextInt()));

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
