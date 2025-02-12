import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt(); // 정점의 수
        int M = scanner.nextInt(); // 간선의 수
        int R = scanner.nextInt(); // 시작 정점
        
        List<Integer>[] graph = new ArrayList[N + 1];
        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }

        // 간선 정보 입력
        for (int i = 0; i < M; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            graph[u].add(v);
            graph[v].add(u);
        }

        // 오름차순 정렬
        for (int i = 1; i <= N; i++) {
            int size = graph[i].size();
            int[] temp = new int[size];
            for (int j = 0; j < size; j++) {
                temp[j] = graph[i].get(j);
            }
            
            Arrays.sort(temp);
            graph[i].clear();
            for (int j = 0; j < size; j++) {
                graph[i].add(temp[j]);
            }
        }

        // BFS 실행
        int[] visitOrder = new int[N + 1]; // 방문 순서 저장
        boolean[] visited = new boolean[N + 1];
        Queue<Integer> queue = new LinkedList<>();
        
        queue.offer(R);
        visited[R] = true;
        int order = 1;
        visitOrder[R] = order++;

        while (!queue.isEmpty()) {
            int node = queue.poll();

            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    visitOrder[neighbor] = order++;
                    queue.offer(neighbor);
                }
            }
        }

        // 방문 순서 출력
        for (int i = 1; i <= N; i++) {
            System.out.println(visitOrder[i]);
        }
    }
}
