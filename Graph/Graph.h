#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>

enum VisitNode { Visited, NotVisited };

typedef int VElementType;
typedef struct tagVertex
{
	VElementType Data;
	int Visited;
	int Index;

	struct tagVertex* Next;
	struct tagEdge* AdjacencyList;
} Vertex;

typedef struct tagEdge
{
	int Weight;
	struct tagEdge* Next;
	Vertex* From;
	Vertex* Target;
} Edge;

typedef struct tagGraph
{
	Vertex* Vertices;
	int VertexCount;
} Graph;

Graph* CreateGraph();
void DestroyGraph(Graph* G);

void AddVertex(Graph* G, Vertex* V);
void AddEdge(Vertex* V, Edge* E);
void PrintGraph(Graph* G);



#endif	GRAPH_H