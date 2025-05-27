package codeforces.div3_1027;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/27/25</p>
 * <p>Time:7:17 AM</p>
 */
public class C {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t = fs.nextInt();
                while (t-- > 0) {

                    int n = fs.nextInt();
                    List<Integer> values = new ArrayList<>();
                    for (int i = 0; i < n; i++) {
                        values.add(fs.nextInt());
                    }
                    values.add(values.getFirst());
                    int ans = 1;
                    int i=0;
                    int j=1;
                    int count = 0;
                    int same=0;
                    while (j<values.size()-1){

                        if(Objects.equals(values.get(i), values.get(j + 1))){

                            j++;
                            continue;
                        }else if(Objects.equals(values.get(i)+1,values.get(j))){

                            count++;
                            i=j;

                        }else {
                            if (count!=0){
                                ans+=count/2;
                                count=0;
                            }else {
                                ans++;
                            }
                        }
                        j++;
                    }
                    if(count!=0){
                        ans+=count/2;
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
