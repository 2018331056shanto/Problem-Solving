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
 * <p>Date:7/1/25</p>
 * <p>Time:6:43 AM</p>
 */
public class FindTheOriginalTypedStringI {

    static void possibleStringCount(String word){

        word+='#';
        int len=word.length();

        int ans=1;
        int i=0;
        int j=0;
        while (j<len){
            if(word.charAt(i)==word.charAt(j)){
                j++;
            }else {
                ans+=j-i-1;
                i=j;
                j++;
            }
        }
        System.out.println(ans);
    }
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                String s=fs.next();
                possibleStringCount(s);

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
