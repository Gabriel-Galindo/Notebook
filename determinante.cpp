//Matematica
//Calcula determinante de uma matriz sem comprometer ela

double A[20][20],b[20],X[20];
double det(int n){
    double mat[n][n],res=1;
    int mxI;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) mat[i][j]=A[i][j];
    for(int i=0;i<n;i++){
        mxI=i;
        for(int j=i+1;j<n;j++){
            if(mat[j][i]>mat[mxI][i]) mxI=j;
        }
        if(mxI!=i){
            for(int j=0;j<n;j++){
                double aux=mat[mxI][j];
                mat[mxI][j]=mat[i][j];
                mat[i][j]=aux;
            }
            res=-res;
        }
        if(abs(mat[i][i])<1e-12) return NAN;
        for(int j=i+1;j<n;j++){
            double F=-mat[j][i]/mat[i][i];
            for(int k=0;k<n;k++) mat[j][k]+=F*mat[i][k];
        }
    }
    for(int i=0;i<n;i++) res*=mat[i][i];
    return res;
}
