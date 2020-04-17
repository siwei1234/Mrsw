#include<stdio.h>
#include<stdlib.h>
int dfs(int m, int n, int k, int i, int j, int* visited) {
	if (i < 0 || i == m || j < 0 || j == n || visited[i * n + j] == 1 || i % 10 + i / 10 + j % 10 + j / 10 > k) {
		return 0;
	}
	visited[i * n + j] = 1;
	return dfs(m, n, k, i + 1, j, visited) + dfs(m, n, k, i, j + 1, visited) + 1;
}
int movingCount(int m, int n, int k) {
	int* visited = (int*)malloc(sizeof(int)*m*n);
	memset(visited, 0, m * n * sizeof(int));
	int ans = dfs(m, n, k, 0, 0, (int*)visited);
	return ans;
}
int main()
{
	printf("%d\n", movingCount(2, 3, 1));
	return 0;
}