package codeforces.edu_div2_180;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:6/29/25</p>
 * <p>Time:11:31 AM</p>
 */
public class C {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                Map<String, Integer> map = new HashMap<>();
                map.merge("1",1,Integer::sum);

                for(Map.Entry<String,Integer> entry:map.entrySet()){

                    map.get(entry.getKey());



                }

                int t = fs.nextInt();
                while(t-->0){
                    int n=fs.nextInt();
                    int []arr=new int[n];
                    for(int i=0;i<n;i++){
                        arr[i]=fs.nextInt();
                    }
                    long ans=0;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<i;j++){

                            int x=Math.max(2*arr[i],arr[n-1])-arr[i]-arr[j];
                            int k=binarySearch(arr,0,j,x);
                            ans+=j-k;
                        }
                    }
                    System.out.println(ans);
                }

            }
            static int binarySearch(int []arr,int low,int high,int val){


                    while(low<high){
                        int mid=low+(high-low)/2;
                        if(arr[mid]<=val){
                            low=mid+1;
                        }else {
                            high=mid;
                        }

                    }
                    return low;
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
