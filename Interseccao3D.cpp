int intersec3d(k, l, m, n, s, t)
{
  double det;


 if (((k->x != l->x) || (k->y != l->y))  &&
     ((m->x != n->x) || (m->y != n->y)) )  /* se nao e' paralela ao plano XY*/
 {
  det = (n->x - m->x) * (l->y - k->y)  -  (n->y - m->y) * (l->x - k->x);

  if (det == 0.0)
   return 0 ;

  *s = ((n->x - m->x) * (m->y - k->y) - (n->y - m->y) * (m->x - k->x))/ det ;
  *t = ((l->x - k->x) * (m->y - k->y) - (l->y - k->y) * (m->x - k->x))/ det ;

  return 1;
 }

 if (((k->x != l->x) || (k->z != l->z))  &&
     ((m->x != n->x) || (m->z != n->z)) )  /* se nao e' paralela ao plano XZ*/
 {
  det = (n->x - m->x) * (l->z - k->z)  -  (n->z - m->z) * (l->x - k->x);

  if (det == 0.0)
   return 0 ;

  *s = ((n->x - m->x) * (m->z - k->z) - (n->z - m->z) * (m->x - k->x))/ det ;
  *t = ((l->x - k->x) * (m->z - k->z) - (l->z - k->z) * (m->x - k->x))/ det ;

  return 1;
 }

 if (((k->y != l->y) || (k->z != l->z))  &&
     ((m->y != n->y) || (m->z != n->z)) )  /* se nao e' paralela ao plano YZ*/
 {
  det = (n->y - m->y) * (l->z - k->z)  -  (n->z - m->z) * (l->y - k->y);

  if (det == 0.0)
   return 0 ;

  *s = ((n->y - m->y) * (m->z - k->z) - (n->z - m->z) * (m->y - k->y))/ det ;
  *t = ((l->y - k->y) * (m->z - k->z) - (l->z - k->z) * (m->y - k->y))/ det ;

  return 1;
 }

 return 1;
}

//Para obter o ponto de interseção, basta substituir T na equação paramétrica da reta MN ou S na equação paramétrica da reta KL
