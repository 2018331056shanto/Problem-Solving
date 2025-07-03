package codeforces.div3_1034;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/2/25</p>
 * <p>Time:11:49 AM</p>
 */
public class C {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();
                while(t-->0){

                    int n=fs.nextInt();

                    int [] arr=new int[n+1];

                    int []prefix=new int[n+1];
                    int [] suffix=new int[n+2];
                    for(int i=0;i<=n;i++){
                        prefix[i]=Integer.MAX_VALUE;
                    }

                    for(int i=1;i<=n;i++){
                        arr[i]=fs.nextInt();

                        prefix[i]=Math.min(arr[i],prefix[i-1]);

                    }

                    for(int i=n;i>=1;i--){
                        suffix[i]=Math.max(arr[i],suffix[i+1]);
                    }

//                    for (int i=1;i<=n;i++){
//                        System.out.print(arr[i]+" ");
//                    }
//                    System.out.println();
//
//                    for (int i=1;i<=n;i++){
//                        System.out.print(prefix[i]+" ");
//                    }
//                    System.out.println();
//                    for (int i=1;i<=n;i++){
//                        System.out.print(suffix[i]+" ");
//                    }
//                    System.out.println();
                    for (int i=1;i<=n;i++){
                        System.out.print((arr[i]==prefix[i]||arr[i]==suffix[i])?1:0);
                    }
                    System.out.println();
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
