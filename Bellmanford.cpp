#include<bits/stdc++.h>
struct Edge{
  int src;
  int dest;
  int weight;
};
struct Graph{
  int V,E;
  struct Edge *edge;
}
struct Graph* createGraph(int V,int E){
  struct Graph * graph= new Graph;
  graph->V=V;
  graph->E=E;
  graph->edge=new Edge[E];
  return graph;
}
void Bellmanford(struct Graph* graph,int src){
int V=graph->V;
int E=graph->E;
int dist[V];
for(int i=0;i<V;i++){
  dist[i]= INT_MAX;
}
dist[src]=0;
for(int i =1;i<=v-1,i++){
  for(int j=0;j<E;j++){
    int u=graph->edge[j].src;
    int v=graph->edge[j].dest;
    int weight=graph->edge[j].weight;
    if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
  }
}
}
