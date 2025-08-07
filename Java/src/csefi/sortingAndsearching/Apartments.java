package csefi.sortingAndsearching;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/7/25</p>
 * <p>Time:10:31 AM</p>
 */
public class Apartments {
    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int n = fs.nextInt();
        int m = fs.nextInt();
        int k = fs.nextInt();

        ArrayList<Integer> desiredAppartments = new ArrayList<>();
        ArrayList<Integer> availableAppartments = new ArrayList<>();
        for (int i = 0; i < n; i++) {

            desiredAppartments.add(fs.nextInt());
        }

        for (int i = 0; i < m; i++) {
            availableAppartments.add(fs.nextInt());
        }

        Collections.sort(availableAppartments);

        Collections.sort(desiredAppartments);

//        for(var x: desiredAppartments){
//            System.out.print(x+" ");
//        }
//        System.out.println();
//        for(var x: availableAppartments){
//            System.out.print(x+" ");
//        }
//        System.out.println();
        int i = 0, j = 0;
        int ans = 0;
        while (i < n && j < m) {

            int dap = desiredAppartments.get(i);
            int aap = availableAppartments.get(j);
            if (aap < dap) {
                if (aap >= dap - k) {
                    i++;
                    j++;
                    ans++;
                } else {
                    j++;
                }
            } else if (aap > dap) {
                if (aap <= dap + k) {
                    i++;
                    j++;
                    ans++;
                } else {
                    i++;
                }
            }else{
                i++;
                j++;
                ans++;
            }


        }
        System.out.println(ans);
    }

//    static int binarySearch(ArrayList<Integer> availableApartments, int target, int k) {
//
//        int low = 0;
//        int high = availableApartments.size() - 1;
//
//        while (low <=high) {
//
//            int mid = (high - low)/2 + low ;
//            if (mid < availableApartments.size()) {
//                int val = availableApartments.get(mid);
//                if (target - k <= val && val <= target + k) {
//                    return val;
//                } else if (val < target ) {
//                    low = mid + 1;
//                } else if (val > target ) {
//                    high = mid - 1;
//                }
//            }
//
//        }
//        return -1;
//    }

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
