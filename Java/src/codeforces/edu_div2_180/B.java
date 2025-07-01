package codeforces.edu_div2_180;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:6/29/25</p>
 * <p>Time:6:59 AM</p>
 */
public class B {

    static void solution( FastScanner fs){

        int n = fs.nextInt();
        int []arr=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=fs.nextInt();
        }

        for(int i=1;i<n;i++){
            if(Math.abs(arr[i-1]-arr[i])<=1){
                System.out.println(0);
                return;

            }
        }
        for(int i=1;i+1<n;i++){
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
                System.out.println(1);
                return;

            }
            if(arr[i-1]>arr[i]&&arr[i]<arr[i+1]){
                System.out.println(1);
                return;

            }
        }
        System.out.println(-1);
        return;
    }
        public static void main(String[] args) {

            FastScanner fs = new FastScanner();
            PrintWriter out = new PrintWriter(System.out);
            int t = fs.nextInt();

            while (t-- > 0) {
                solution(fs);

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
