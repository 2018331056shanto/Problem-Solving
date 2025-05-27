package codeforces.div3_1027;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Objects;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/27/25</p>
 * <p>Time:6:05 AM</p>
 */
public class B {
        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);

                int t = fs.nextInt();

                while (t-- > 0) {

                    int n = fs.nextInt();
                    int k=fs.nextInt();

                    String s=fs.next();
                    int countZero=0;

                    for(int i=0;i<s.length();i++){
                        if (Objects.equals(s.charAt(i),'0')) countZero++;
                    }

                    int countOne=n-countZero;
                    int differenceBetweenZeroAndOne=Math.abs(countOne-countZero);

                    if(differenceBetweenZeroAndOne/2>k)
                    System.out.println("No");
                    else if(differenceBetweenZeroAndOne/2==k)
                       System.out.println("Yes");
                    else {
                        if(differenceBetweenZeroAndOne==0)
                        {
                            if(k%2==0){
                               System. out.println("Yes");
                            }else {
                               System. out.println("No");
                            }
                        }else {
                            k-=differenceBetweenZeroAndOne/2;
                            if(k%2==0)
                                System.out.println("Yes");
                            else
                                System.out.println("No");
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
