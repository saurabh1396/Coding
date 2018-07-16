#include<iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;
struct AdjListNode{
  int dest;
  int weight;
  struct AdjListNode*next;

};
struct AdjList{
  struct AdjListNode*head;
};
struct Graph{
  int V;
  struct AdjList *array;
};
struct AdjListNode* newAdjListNode(int dest,int weight){
  struct AdjListNode* newNode= (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
  newNode->dest=dest;
  newNode->weight=weight;
  newNode->next=NULL;
  return newNode;
}
struct Graph* creategraph(int V){
  struct Graph *graph=(struct Graph*)malloc(sizeof(struct Graph));
  graph->V=V;
  graph->array=(struct Graph*)malloc(V*sizeof(struct AdjList));
  for(int i=0;i<V;i++){
    graph->array[i].head=NULL;
    return graph;
  }
}
void addEdge(struct Graph* graph,int src,int dest,int weight){
  struct AdjListNode* newNode=newAdjListNode(dest,weight);
  newNode->next=graph->array[src].head;
  graph->array[src].head=newNode;


  newNode= newAdjListNode(src,weight);
  newNode->next=graph->array[dest].head;
  graph->array[dest].head=newNode;
}
struct MinHeapNode{
int v;
int dest;
};

struct MinHeap{
  int size;
  int capacity;
  int *pos;
  struct MinHeapNode**array;
};
struct MinHeapNode* newMinHeapNode(int v,int dist){
struct MinHeapNode* MinHeapNode= (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode*));
minHeapNode->v = v;
    minHeapNode->dist = dist;
    return minHeapNode;

}
