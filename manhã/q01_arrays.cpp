#include <iostream>

using namespace std;

void ler_vetor(int vet[], int tam){
    for(int i=0; i<tam; i++){
        cout<<"Posicao "<<i+1<<": ";
        cin>>vet[i];
    }
}

void imprimir_vetor(int vet[], int tam){
    for(int i=0; i<tam; i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
}

int maior_elemento(int vet[], int tam){
    int maior = vet[0];
    for(int i=0; i<tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int menor_elemento(int vet[], int tam){
    int menor = vet[0];
    for(int i=0; i<tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

int somar_vetor(int vet[], int tam){
    int soma = 0;
    for(int i=0; i<tam; i++){
        soma += vet[i];
    }
    return soma;
}

double media(int vet[], int tam){
    return (double)somar_vetor(vet,tam) / tam;
}

int main()
{
    const int tam = 5;
    int vetor[tam];
    ler_vetor(vetor,tam);
    imprimir_vetor(vetor,tam);
    cout<<"Maior elemento: "<<maior_elemento(vetor,tam)<<endl;
    cout<<"Menor elemento: "<<menor_elemento(vetor,tam)<<endl;
    cout<<"Soma dos elementos: "<<somar_vetor(vetor,tam)<<endl;
    cout<<"Media dos elementos: "<<media(vetor,tam)<<endl;
    return 0;
}