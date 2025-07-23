package codeforces.div3_1037;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:7/21/25</p>
 * <p>Time:6:28 AM</p>
 */
public class C {

        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();
                while(t-->0){
                    int n=fs.nextInt();
                    int k=fs.nextInt();
                    int [] arr=new int[n+1];

                    for(int i=1;i<=n;i++){
                        arr[i]=fs.nextInt();
                    }
                    int cur=arr[k];
                    Arrays.sort(arr);

                    int index=1;
                    int left=1;
                    int right=n;
                    while(left<=right){
                        int mid=left+(right-left)/2;
                        if(cur==arr[mid]){
                            index=mid;
                            break;
                        }else if(cur<arr[mid]){
                            right=mid-1;
                        }else if(cur>arr[mid]) {
                            left=mid+1;
                        }
                    }
                    boolean flag=true;
                    int curHeight=arr[index];
                    int curTime=0;
                    for(int i=index+1;i<=n;i++){
                        int nextHeight=arr[i];
                        int timeToTravel=nextHeight-curHeight;
                       if(((long)curHeight<(long)curTime+(long)timeToTravel)){
                           flag=false;
                           break;
                       }
                       curTime+=timeToTravel;
                       curHeight=nextHeight;

                    }
                    if(flag){
                        System.out.println("YES");
                    }
                    else {
                        System.out.println("NO");
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
