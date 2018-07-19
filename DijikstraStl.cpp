#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
  unordered_map<T,list<pair<T,int>>> m;
public:
  void addEdge(T u,T v,int dist,bool bidir=true){
    m[u].push_back(make_pair(v,dist));
    if(bidir==true){
      m[v].push_back(make_pair(u,dist));
    }
  }
  void printAdj(){
    for( auto j:m){

    }
  }
  void DijikstraStl(T src){
    unordered_map<T,int>dist;
    for(auto j:m){
      dist[j.first]=INT_MAX;
      }
      set<pair<int,T>> s;
      dist[src]=0
      s.insert(make_pair(0,src));
      while (!s.empty()) {
        /* code */
        auto p= *(s.begin());
        T node= p.second;
        int nodeDist =p.first;
        s.erase(s.begin());
      }
  }
}
