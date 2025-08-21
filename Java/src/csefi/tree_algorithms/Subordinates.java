//package csefi.tree_algorithms;
//
//import java.io.BufferedReader;
//import java.io.IOException;
//import java.io.InputStreamReader;
//import java.io.PrintWriter;
//import java.util.ArrayList;
//import java.util.HashMap;
//import java.util.Map;
//import java.util.StringTokenizer;
//
//import static java.lang.Integer.parseInt;
//import static java.lang.Long.parseLong;
//import static java.lang.System.in;
//
///**
// * @author: Ashraful Islam Shanto
// * <p>Date: 8/13/25</p>
// * <p>Time: 10:33 PM</p>
// */
//public class Subordinates {
//
//    private static int[] list = new int[2000010];
//
//    public static void main(String[] args) {
//
//        FastScanner fs = new FastScanner();
//        PrintWriter out = new PrintWriter(System.out);
//
//        int n = fs.nextInt();
//
//        Map<Integer, ArrayList<Integer>> map = new HashMap<>();
//
//        for (int i = 2; i <= n; i++) {
//
//            int el = fs.nextInt();
//            map.computeIfAbsent(el, k -> new ArrayList<>()).add(i);
//
//        }
//
//        getSubordinates(map, 1, n);
//
//        for (int i = 1; i <= n; i++) {
//            System.out.print(list[i] + " ");
//        }
//        System.out.println();
//
//
//    }
//
//    public static int getSubordinates(Map<Integer, ArrayList<Integer>> map, int root, int n) {
//
////        out.println(root);
//        if (!map.containsKey(root)) {
//
//            list[root] = 0;
//            return 0;
//        }
//
//
//        int count = 0;
//        for (var el : map.get(root)) {
//            count += 1 + getSubordinates(map, el, n);
//        }
//        list[root] = count;
//        return count;
//
//
//    }
//
//    static class FastScanner {
//        BufferedReader br = new BufferedReader(new InputStreamReader(in));
//        StringTokenizer st = new StringTokenizer("");
//
//        String next() {
//            while (!st.hasMoreTokens()) try {
//                st = new StringTokenizer(br.readLine());
//            } catch (IOException e) {
//                e.printStackTrace();
//            }
//            return st.nextToken();
//        }
//
//        int nextInt() {
//            return parseInt(next());
//        }
//
//        int[] readArray(int n) {
//            int[] a = new int[n];
//            for (int i = 0; i < n; i++)
//                a[i] = nextInt();
//            return a;
//        }
//
//        long nextLong() {
//            return parseLong(next());
//        }
//    }
//}
//package csefi.tree_algorithms;
import java.io.*;
import java.util.*;

public class Subordinates {

    static int[] ans;
    static ArrayList<Integer>[] g;

    public static void main(String[] args) throws IOException {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();

        g = new ArrayList[n+1];
        for (int i = 1; i <= n; i++) g[i] = new ArrayList<>();
        for (int i = 2; i <= n; i++) {
            int x = fs.nextInt();
            g[x].add(i);
        }

        ans = new int[n+1];
        iterativeDFS(1);

        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= n; i++) sb.append(ans[i]).append(" ");
        System.out.println(sb);
    }

    // Post-order DFS using stack
    static void iterativeDFS(int root) {
        int n = g.length;
        int[] cnt = new int[n];
        boolean[] visited = new boolean[n];

        Deque<Integer> stack = new ArrayDeque<>();
        stack.push(root);

        while (!stack.isEmpty()) {
            int u = stack.peek();
            if (!visited[u]) {
                visited[u] = true;
                for (int v : g[u]) stack.push(v);
            } else {
                stack.pop();
                int c = 0;
                for (int v : g[u]) c += 1 + cnt[v];
                cnt[u] = c;
            }
        }
        ans = cnt;
    }

    // Super-fast input reader
    static class FastScanner {
        private final byte[] buffer = new byte[1 << 16];
        private int bId = 0, size = 0;
        private final InputStream in = System.in;

        private int readByte() throws IOException {
            if (bId == size) {
                size = in.read(buffer);
                bId = 0;
                if (size == -1) return -1;
            }
            return buffer[bId++];
        }

        int nextInt() throws IOException {
            int c, sign = 1, val = 0;
            do { c = readByte(); } while (c <= ' ');
            if (c == '-') { sign = -1; c = readByte(); }
            while (c > ' ') {
                val = val * 10 + (c - '0');
                c = readByte();
            }
            return val * sign;
        }
    }
}
