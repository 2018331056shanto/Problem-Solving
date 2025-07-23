package codeforces.div3_1037;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/21/25</p>
 * <p>Time:5:51 AM</p>
 */
public class B {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t=fs.nextInt();
        while(t-->0){
           int n=fs.nextInt();
           int k=fs.nextInt();
           int [] arr=new int[n];
           for(int i=0;i<n;i++){
               arr[i]=fs.nextInt();
           }

           int i=0;
           int j=0;
           int ans=0;
           while(j<n){

               while(j<n&&arr[j]==0){

                   if(j-i+1==k){
                       ans++;
                       ++j;
                       ++j;
                       i=j;
                   }else{
                       j++;
                   }
               }
               j++;
               i=j;


           }

            System.out.println(ans);
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
