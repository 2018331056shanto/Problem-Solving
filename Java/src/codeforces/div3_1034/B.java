package codeforces.div3_1034;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/2/25</p>
 * <p>Time:10:00 AM</p>
 */
public class B {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();
                while(t-->0){
                    int  n=fs.nextInt();
                    int j=fs.nextInt();
                    int k=fs.nextInt();

                    int[] arr=new int[n];
                    int max=Integer.MIN_VALUE;

                    int selectedItem=0;
                    for(int i=0;i<n;i++){
                        arr[i]=fs.nextInt();
                        max=Math.max(max,arr[i]);
                    }

                    System.out.println((k>1||arr[j-1]==max?"Yes":"No"));

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
