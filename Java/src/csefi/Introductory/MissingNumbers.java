package csefi.Introductory;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/5/25</p>
 * <p>Time:12:44 PM</p>
 */
public class MissingNumbers {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int n = fs.nextInt();

        ArrayList<Integer> list = new ArrayList<Integer>();

        for (int i = 0; i < n - 1; i++) {
            list.add(fs.nextInt());
        }
        Collections.sort(list);

        int missingNumber = 1;
        for (int i = 0; i < n - 1; i++) {
            if (list.get(i) != missingNumber) {
                break;
            }
            missingNumber++;
        }
        System.out.println(missingNumber);


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
