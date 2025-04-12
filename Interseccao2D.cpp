//Matematica, Geometria
double s,t;

int inter(Ponto k, Ponto l, Ponto m, Ponto n){
 double det;

 det = (n.x - m.x) * (l.y - k.y)  -  (n.y - m.y) * (l.x - k.x);

 if (det == 0.0) return 0 ; // não há intersecção

  s = ((n.x - m.x) * (m.y - k.y) - (n.y - m.y) * (m.x - k.x))/ det ;//se s>=0&&s<=1 intersect no segmento kl se s<0 intersecta na semireta infl se s>1 kinf
  t = ((l.x - k.x) * (m.y - k.y) - (l.y - k.y) * (m.x - k.x))/ det ;//se t>=0&&t<=1 intersecta no segmento mn

 return 1; // há intersecção
}

//Consegue fazer checagem se um poligono é convexo, verifica um lado com os pontos antes e depois
//Consegue verificar se um ponto pertence ao poligono, verifica por quantos lados uma semireta saindo do ponto passa, se for par esta fora se for impar dentro, precisa checar se coincide com vertice separadamente
