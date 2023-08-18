#include <iostream>
#define MAX 10

using namespace std;

void ler_matriz(int mat[MAX][MAX],int lin,int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<"M["<<i+1<<","<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
}

void somar_matrizes(int msoma[MAX][MAX], int m1[MAX][MAX], int m2[MAX][MAX], int lin, int col){
    for(int i=0; i<lin;i++){
        for(int j=0; j<col; j++){
            msoma[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void imprimir(int mat[MAX][MAX],int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matriz1[MAX][MAX], matriz2[MAX][MAX], matr[MAX][MAX];
    int l, c;
    cout<<"Quantas linhas? ";
    cin>>l;
    cout<<"Quantas colunas? ";
    cin>>c;
    cout<<"Valores para a matriz 1:"<<endl;
    ler_matriz(matriz1,l,c);
    cout<<"Valores para a matriz 2:"<<endl;
    ler_matriz(matriz2,l,c);
    somar_matrizes(matr,matriz1,matriz2,l,c);
    cout<<"Matriz 1:"<<endl;
    imprimir(matriz1,l,c);
    cout<<"Matriz 2:"<<endl;
    imprimir(matriz2,l,c);
    cout<<"Soma:"<<endl;
    imprimir(matr,l,c);
    return 0;
}