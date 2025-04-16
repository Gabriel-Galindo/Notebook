//Grafos
//Fluxo Max
//Usa BFS, unico ponto de começo e fim

#define INF 0x3F3F3F3F
int rgrafo[][]//matriz utilizada no BFS

int maxflow(int s,int e,int n){
  int u,v;
  int fluxo=0;
  int bot;
  for(u=0;u<n;u++)
    for(v=0;v<n;n++) rgrafo[u][v]=mat[u][v];
  while(BFS(s,e,n)){
    bot=INF;
    for(v=e;v!=s;v=anterior[v]){
      u=anterior[v];
      bot=min(bot,rgrafo[u][v]);
    }
    for(v=e;v!=s;v=anterior[v]){
      u=anterior[v];
      rgrafo[u][v]-=bot;rgrafo[v][u]+=bot;
    }
    fluxo+=bot;
  }
  return fluxo;
}
