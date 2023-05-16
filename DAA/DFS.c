#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertexNumber;
    struct node *pointerToNextVertex;
};

struct Graph
{
    int numberOfVertices;

    int *visitedRecord;

    struct node **adjacencyLists;
};

struct node *createNodeForList(int v)
{
    struct node *newNode = malloc(sizeof(struct node));

    newNode->vertexNumber = v;

    newNode->pointerToNextVertex = NULL;
    return newNode;
}

void addEdgeToGraph(struct Graph *graph, int source, int destination)
{
    struct node *newNode = createNodeForList(destination);

    newNode->pointerToNextVertex = graph->adjacencyLists[source];

    graph->adjacencyLists[source] = newNode;

    newNode = createNodeForList(source);
    newNode->pointerToNextVertex = graph->adjacencyLists[destination];
    graph->adjacencyLists[destination] = newNode;
}

struct Graph *createGraph(int vertices)
{
    int i;

    struct Graph *graph = malloc(sizeof(struct Graph));

    graph->numberOfVertices = vertices;

    graph->adjacencyLists = malloc(vertices * sizeof(struct node *));

    graph->visitedRecord = malloc(vertices * sizeof(int));

    for (i = 0; i < vertices; i++)
    {
        graph->adjacencyLists[i] = NULL;
        graph->visitedRecord[i] = 0;
    }

    return graph;
}

void depthFirstSearch(struct Graph *graph, int vertexNumber)
{
    struct node *adjList = graph->adjacencyLists[vertexNumber];
    struct node *temp = adjList;

    graph->visitedRecord[vertexNumber] = 1;
    printf("%d ", vertexNumber);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertexNumber;

        if (graph->visitedRecord[connectedVertex] == 0)
        {
            depthFirstSearch(graph, connectedVertex);
        }
        temp = temp->pointerToNextVertex;
    }
}

int main()
{
    int numberOfVertices, numberOfEdges, i;
    int source, destination;
    int startingVertex;

    printf("Enter Number of Vertices and Edges in the Graph: ");
    scanf("%d%d", &numberOfVertices, &numberOfEdges);
    struct Graph *graph = createGraph(numberOfVertices);

    printf("Add %d Edges of the Graph(Vertex numbering should be from 0 to %d)\n", numberOfEdges, numberOfVertices - 1);
    for (i = 0; i < numberOfEdges; i++)
    {
        scanf("%d%d", &source, &destination);
        addEdgeToGraph(graph, source, destination);
    }

    printf("Enter Starting Vertex for DFS Traversal: ");
    scanf("%d", &startingVertex);

    if (startingVertex < numberOfVertices)
    {
        printf("DFS Traversal: ");
        depthFirstSearch(graph, startingVertex);
    }
    return 0;
}