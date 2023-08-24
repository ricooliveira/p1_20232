#include <iostream>

using namespace std;

struct Candidato{
    string nome;
    string telefone;
    int idade;
    double prova;
};

void ler_vetor(Candidato vet[], int tam){
    for (int i=0; i<tam; i++){
        cout<<"Nome do "<<i+1<<" candidato: ";
        cin>>vet[i].nome;
        cout<<"Telefone: ";
        cin>>vet[i].telefone;
        cout<<"Idade: ";
        cin>>vet[i].idade;
        cout<<"Nota da prova: ";
        cin>>vet[i].prova;
        cout<<"---------------------"<<endl;
    }
}

int candidato_aprovado(Candidato vet[],int tam){
    int vencedor = 0;
    for(int i=1; i<tam;i++){
        if(vet[i].prova > vet[vencedor].prova){
            vencedor = i;
        } else if(vet[i].prova == vet[vencedor].prova){
            if(vet[i].idade > vet[vencedor].idade){
                vencedor = i;
            }
        }
    }
    return vencedor;
}

int main(){
    const int tam = 3;
    Candidato vetor[tam];
    ler_vetor(vetor,tam);
    int index_vencedor;
    index_vencedor = candidato_aprovado(vetor,tam);
    cout<<"Candidato vencedor: "<<vetor[index_vencedor].nome<<endl;
    return 0;
}