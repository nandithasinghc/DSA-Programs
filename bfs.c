//BFS Traversal using Queue
//Written by Nanditha Singh C
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int queue[MAX];
int front = 0;
int rear = -1;

void enqueue(int value) {
    if (rear < MAX - 1) {
        queue[++rear] = value;
    }
}

int dequeue() {
    if (front <= rear) {
        return queue[front++];
    }
    return -1;
}

bool isQueueEmpty() {
    return front > rear;
}

void bfs(int adj[MAX][MAX], int vertices, int startVertex) {
    bool visited[MAX] = {false};

    visited[startVertex] = true;
    enqueue(startVertex);

    while (!isQueueEmpty()) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        for (int i = 0; i < vertices; i++) {
            if (adj[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

int main() {
    int vertices = 4;
    int adj[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    bfs(adj, vertices, 0);

    return 0;
}
