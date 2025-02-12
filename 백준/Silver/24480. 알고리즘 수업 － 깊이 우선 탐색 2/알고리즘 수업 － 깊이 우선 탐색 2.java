import java.io.*;
import java.util.*;

public class Main {
    static List<Integer>[] graph;
    static int[] visitOrder;
    static boolean[] visited;
    static int order = 1;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken()); // 정점 개수
        int M = Integer.parseInt(st.nextToken()); // 간선 개수
        int R = Integer.parseInt(st.nextToken()); // 시작 정점

        graph = new ArrayList[N + 1];
        visitOrder = new int[N + 1];
        visited = new boolean[N + 1];

        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }

        // 간선 정보 입력
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            graph[u].add(v);
            graph[v].add(u);
        }

        // 내림차순 정렬 (큰 숫자를 먼저 방문하기 위해)
        for (int i = 1; i <= N; i++) {
            graph[i].sort(Collections.reverseOrder());
        }

        // DFS 실행
        dfs(R);

        // 방문 순서 출력
        for (int i = 1; i <= N; i++) {
            bw.write(visitOrder[i] + "\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }

    private static void dfs(int node) {
        visited[node] = true;
        visitOrder[node] = order++;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    }
}
