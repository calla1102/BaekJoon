import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt(); 
        int M = scanner.nextInt();
        int R = scanner.nextInt();
        
        List<Integer>[] graph = new ArrayList[N + 1];
        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }
        
        for (int i = 0; i < M; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            graph[u].add(v);
            graph[v].add(u);
        }
        
        int[] vi = new int[N + 1]; // 정점 순서 저장
        Queue<Integer> que = new LinkedList<>();
        boolean[] visited = new boolean[N + 1]; //이미 방문했는지
        
        que.offer(R);
        visited[R] = true; 
        
        int order = 1;
        vi[R] = order;
        
        while (!que.isEmpty()) {
            int now = que.poll();
            
            int[] neighbors = new int[graph[now].size()];
            for (int i = 0; i < graph[now].size(); i++) {
                neighbors[i] = graph[now].get(i);
            }
            
            // 내림차순 정렬 대신 최대 힙을 사용하여 직접 삽입 순서 조정
            Arrays.sort(neighbors);
            for (int i = neighbors.length - 1; i >= 0; i--) {
                int neighbor = neighbors[i];
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    que.offer(neighbor);
                    vi[neighbor] = ++order;
                }
            }
        }
        
        // 결과 출력
        for (int i = 1; i <= N; i++) {
            System.out.println(vi[i]);
        }
    }
}
