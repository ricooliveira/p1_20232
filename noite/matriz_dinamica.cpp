#include <iostream>

using namespace std;

double** criar_matriz(int lin, int col){
    double** mat;
    mat = new double*[lin];
    for(int i=0; i<lin; i++){
        mat[i] = new double[col];
    }
    return mat;
}

void ler_matriz(double **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<"M["<<i+1<<","<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
}

void imprimir(double** mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int l, c;
    cout<<"Quantas linhas? ";
    cin>>l;
    cout<<"Quantas colunas? ";
    cin>>c;
    double** matriz = criar_matriz(l,c);
    ler_matriz(matriz,l,c);
    imprimir(matriz,l,c);
    return 0;
}