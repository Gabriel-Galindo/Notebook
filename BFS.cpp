//Grafos
//Usa-se para descobrir caminho possiveis

#define INF 0x3F3F3F3F

int vis[],anterior[];

int BFS(int s,int e,int n){//retorna 1 se tiver caminho 0 se n
  queue<int> fila;
  for(int i=0;i<n;i++) vis[i]=0;
  fila.push(s);vis[s]=1;anterior[s]=-1;
  while(!fila.empty()){
    for(int i=0;i<n;i++){
      if(!vis[i]&&mat[fila.front()][i]){
        anterior[i]=fila.front();
        if(i==e) return 1;
        fila.push(i);
        vis[i]=1;
    }
    fila.pop()
  }
  return 0;
}
