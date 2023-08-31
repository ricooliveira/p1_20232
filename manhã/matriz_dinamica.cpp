#include<iostream>

using namespace std;

int** criar_matriz(int lin, int col){
    int **mat;
    mat = new int*[lin];
    for(int i = 0; i<lin; i++){
        mat[i] = new int[col];
    }
    return mat;
}

void ler_matriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<"M["<<i+1<<","<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
}

void imprimir(int** mat, int lin, int col){
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
    int** matriz = criar_matriz(l,c);
    ler_matriz(matriz,l,c);
    imprimir(matriz,l,c);

    return 0;
}