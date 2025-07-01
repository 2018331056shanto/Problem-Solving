package codeforces.div3_1027;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:5/28/25</p>
 * <p>Time:7:58 AM</p>
 */
public class D {

        public static void main(String[] args) {

                FastScanner fs = new FastScanner();
                PrintWriter out = new PrintWriter(System.out);
                int t=fs.nextInt();

                while(t-->0){
                    int n=fs.nextInt();
                    Map<Integer,Integer> rows=new Hashtable<>();
                    Map<Integer,Integer> cols=new Hashtable<>();

                    for(int i=0;i<n;i++){
                        int x=fs.nextInt();
                        int y=fs.nextInt();

                        rows.put(x,rows.getOrDefault(x,0)+1);
                        cols.put(y,cols.getOrDefault(y,0)+1);

                    }

                    AtomicInteger startRow= new AtomicInteger();
                    AtomicInteger endRow=new AtomicInteger();


                   rows.entrySet().stream().forEach(entry->{


                       startRow.set(Math.min(startRow.get(), entry.getKey()));
                       endRow.set(Math.max(endRow.get(),entry.getKey()));

                   });


                    AtomicInteger startCol= new AtomicInteger();
                    AtomicInteger endCol=new AtomicInteger();

                    cols.entrySet().stream().forEach(entry->{

                        startCol.set(Math.min(startCol.get(), entry.getKey()));
                        endCol.set(Math.max(endCol.get(),entry.getKey()));

                    });

//                    if(rows.get(startRow.get()).)

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
