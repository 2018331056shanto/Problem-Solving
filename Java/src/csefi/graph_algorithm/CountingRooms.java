package csefi.graph_algorithm;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Objects;
import java.util.Stack;
import java.util.StringTokenizer;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:8/7/25</p>
 * <p>Time:12:48 PM</p>
 */
public class CountingRooms {
    static int[][] vis = new int[1001][1001];

    public static void main(String[] args) {

        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        ArrayList<String> graph = new ArrayList<>();
        int n = fs.nextInt();
        int m = fs.nextInt();

        for (int i = 0; i < n; i++) {
            String s = fs.next();
            graph.add(s);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                String s = graph.get(i);
                char x = s.charAt(j);
                if (Objects.equals(x, '.') && vis[i][j] == 0) {
                    dfs(graph, i, j, n, m);
                    ans++;
                }

            }
        }

        System.out.println(ans);


    }

    static void dfs(ArrayList<String> graph, int i, int j, int n, int m) {

//        if (i >= n || i < 0 || j >= m || j < 0 || vis[i][j] != 0||!Objects.equals(graph.get(i).charAt(j),'.')) {
//
//            return;
//        }
//
//        vis[i][j] = 1;
//        dfs(graph, i + 1, j, n, m);
//        dfs(graph, i, j + 1, n, m);
//        dfs(graph, i, j - 1, n, m);
//        dfs(graph, i - 1, j, n, m);

        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};

        Stack<int[]> stack = new Stack<>();

        stack.push(new int[]{i, j});


        while (!stack.isEmpty()) {
            int[] current = stack.pop();

            int x = current[0];
            int y = current[1];

            if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] != 0 || graph.get(x).charAt(y) != '.') {
                continue;
            }

            vis[x][y] = 1;

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                stack.push(new int[]{nx, ny});
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
