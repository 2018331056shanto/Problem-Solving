package codeforces.div2_1025;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/22/25</p>
 * <p>Time:7:42 AM</p>
 */
public class A {

        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
            int t = fs.nextInt();
            while(t-- > 0) {
                int n = fs.nextInt();

//            List<Integer> playerReport=Arrays.stream(fs.readArray(n)).map(val->(Integer)val).boxed().toList();

                int []playerReport=fs.readArray(n);
                int count=0;
                boolean isConsecutiveZero=false;


                for(int i=0;i<n-1;i++) {
                    if(playerReport[i]==0&&playerReport[i+1]==0) {
                        isConsecutiveZero=true;
                        break;
                    }
                    if(playerReport[i]==0)
                        count++;
                }

                if(playerReport[n-1]==0)
                    count++;
                if(isConsecutiveZero) {
                    System.out.println("Yes");
                }
                else {
                    if(n-count<=(n-1)){
                        System.out.println("No");
                    }else {
                        System.out.println("Yes");
                    }
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