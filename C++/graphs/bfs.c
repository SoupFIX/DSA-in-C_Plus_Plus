#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX_VERTICES 50

// --- Simple Queue Implementation ---
int queue[MAX_VERTICES];
int front = -1;
int rear = -1;

// Check if the queue is empty
int isEmpty()
{
    return front == -1;
}

// Add an item to the queue
void enqueue(int item)
{
    if (rear == MAX_VERTICES - 1)
    {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1)
    {
        front = 0; // Set front when adding the first element
    }
    rear++;
    queue[rear] = item;
}

// Remove an item from the queue
int dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty!\n");
        exit(1); // Exit on underflow
    }
    int item = queue[front];
    front++;

    // Reset queue when the last element is dequeued
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    return item;
}
// --- End of Queue Implementation ---

// --- BFS Implementation ---

// visited array: 0 = not visited, 1 = visited
int visited[MAX_VERTICES];
// graph: Adjacency Matrix
int adjMatrix[MAX_VERTICES][MAX_VERTICES];
int numVertices;

/**
 * Performs BFS traversal on the graph starting from startNode.
 * @param startNode The vertex to begin the traversal from (0-indexed).
 */
void bfs(int startNode)
{
    // 1. Mark the starting node as visited and enqueue it
    visited[startNode] = 1;
    enqueue(startNode);

    printf("BFS Traversal starting from node %d:\n", startNode);

    // 2. Loop as long as the queue is not empty
    while (!isEmpty())
    {
        // 3. Dequeue a vertex and print it
        int currentNode = dequeue();
        printf("%d ", currentNode);

        // 4. Find all unvisited neighbors of the dequeued vertex
        for (int i = 0; i < numVertices; i++)
        {
            // Check if 'i' is a neighbor (edge exists)
            // AND 'i' has not been visited yet
            if (adjMatrix[currentNode][i] == 1 && visited[i] == 0)
            {
                // 5. Mark the neighbor as visited and enqueue it
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

// --- Main Function to Set Up Graph and Run BFS ---
int main()
{
    // We will use a graph with 5 vertices
    numVertices = 5;

    // Initialize the adjacency matrix and visited array to 0
    for (int i = 0; i < numVertices; i++)
    {
        visited[i] = 0;
        for (int j = 0; j < numVertices; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    /*
     * Let's create the following graph:
     *
     * 0 ----- 1
     * | \     |
     * |  \    |
     * |   \   |
     * 3-----2 -- 4
     */

    // Add edges for an undirected graph
    // (u, v) means we also add (v, u)

    // 0 is connected to 1, 2, 3
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1;
    adjMatrix[0][2] = 1;
    adjMatrix[2][0] = 1;
    adjMatrix[0][3] = 1;
    adjMatrix[3][0] = 1;

    // 1 is connected to 0, 2
    adjMatrix[1][2] = 1;
    adjMatrix[2][1] = 1;

    // 2 is connected to 0, 1, 3, 4
    adjMatrix[2][3] = 1;
    adjMatrix[3][2] = 1;
    adjMatrix[2][4] = 1;
    adjMatrix[4][2] = 1;

    // 3 is connected to 0, 2
    // 4 is connected to 2

    // Start BFS from node 0
    bfs(0);

    return 0;
}