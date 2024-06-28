#include <iostream>
#include <vector>
#include <queue>
#define MAX_NODES 200100
using namespace std;

struct EdgeNode
{
    int targetNode;
    EdgeNode *nextEdge;
};

struct VertexNode
{
    EdgeNode *firstEdge;
};

class Graph
{
public:
    int numVertices = 0, numEdges = 0;
    VertexNode vertices[MAX_NODES];
    Graph()
    {
        for (int i = 0; i < MAX_NODES; ++i)
            vertices[i].firstEdge = nullptr;
    }
};

Graph graph;
int startVertex;

void InsertEdge(int from, int to)
{
    EdgeNode *newNode = new EdgeNode{to, graph.vertices[from].firstEdge};
    graph.vertices[from].firstEdge = newNode;
}

void InitializeGraph()
{
    cin >> graph.numVertices >> graph.numEdges >> startVertex;
    for (int i = 0; i < graph.numEdges; ++i)
    {
        int from, to;
        cin >> from >> to;
        if (to != startVertex) InsertEdge(from, to);
    }
}

void BreadthFirstSearch()
{
    int distances[MAX_NODES] = {0};
    queue<pair<int, int>> bfsQueue;
    EdgeNode *currentNode = graph.vertices[startVertex].firstEdge;
    int distance = 1;
    while (currentNode)
    {
        bfsQueue.push({currentNode->targetNode, distance});
        distances[currentNode->targetNode] = distance;
        currentNode = currentNode->nextEdge;
        distance++;
    }
    while (!bfsQueue.empty())
    {
        pair<int, int> currentPair = bfsQueue.front();
        bfsQueue.pop();
        for (EdgeNode *edge = graph.vertices[currentPair.first].firstEdge; edge != nullptr; edge = edge->nextEdge)
        {
            if (!distances[edge->targetNode])
            {
                bfsQueue.push({edge->targetNode, currentPair.second});
                distances[edge->targetNode] = currentPair.second;
            }
            else if (distances[edge->targetNode] != currentPair.second)
            {
                cout << "Possible" << endl;
                return;
            }
        }
    }
    cout << "Impossible" << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    InitializeGraph();
    BreadthFirstSearch();

    return 0;
}