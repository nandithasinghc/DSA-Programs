//DFS Traversal 
//Written by Nanditha Singh.C
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void dfs(int adj[MAX][MAX], int vertices, int currentVertex, bool visited[MAX]) {
    visited[currentVertex] = true;
    printf("%d ", currentVertex);

    for (int i = 0; i < vertices; i++) {
        if (adj[currentVertex][i] == 1 && !visited[i]) {
            dfs(adj, vertices, i, visited);
        }
    }
}

int main() {
    int vertices = 4;
    int adj[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    bool visited[MAX] = {false};

    dfs(adj, vertices, 0, visited);
    printf("\n");

    return 0;
}
