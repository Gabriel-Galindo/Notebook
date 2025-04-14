//Matematica
//Usa determinante para resolver sistemas
//O(n^4)

void solver(int n){
    double d=det(n);
    double aux[n];
    //if(abs(d)<1e-12) return;//determinante = 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            aux[j]=A[j][i];
            A[j][i]=b[j];
        }
        X[i]=det(n)/d;
        for(int j=0;j<n;j++) A[j][i]=aux[j];
    }
}
