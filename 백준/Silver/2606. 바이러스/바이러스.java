import java.util.*;

public class Main {
    static List<Integer>[] graph;
    static boolean[] visited;
    static int count = 0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt(); // 컴퓨터의 수
        int M = scanner.nextInt(); // 직접 연결된 컴퓨터 쌍의 수
        
        graph = new ArrayList[N + 1];
        visited = new boolean[N + 1];

        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }

        // 네트워크 연결 정보 입력
        for (int i = 0; i < M; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            graph[u].add(v);
            graph[v].add(u);
        }

        // 오름차순 정렬 (필수는 아니지만 탐색 순서 일정하게 유지)
        for (int i = 1; i <= N; i++) {
            Collections.sort(graph[i]);
        }

        // DFS 실행 (1번 컴퓨터에서 시작)
        dfs(1);

        // 감염된 컴퓨터 수 출력 (1번 컴퓨터 제외)
        System.out.println(count - 1);
    }

    private static void dfs(int node) {
        visited[node] = true;
        count++;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    }
}
