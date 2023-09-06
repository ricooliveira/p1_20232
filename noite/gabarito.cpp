#include <iostream>

using namespace std;

void preencher_gabarito(char *vet, int tam){
    for(int i=0; i<tam; i++){
        cout<<"Gabarito questao "<<i+1<<": ";
        cin>>vet[i];
    }
}

double resultado(char* vet_gabarito, char *vet_respostas, int quant_questoes){
    for(int i=0; i<quant_questoes; i++){
        cout<<"Resposta questao "<<i+1<<": ";
        cin>>vet_respostas[i];
    }
    int acertos = 0;
    for(int i=0; i<quant_questoes; i++){
        if(vet_respostas[i] == vet_gabarito[i])
            acertos++;
    }
    return (double(acertos)/quant_questoes) * 10;
}

int main(){
    int quant_questoes;
    cout<<"Quantas questoes tem a prova? ";
    cin>>quant_questoes;
    // char gabarito[10];
    char *gabarito;
    gabarito = new char[quant_questoes];
    preencher_gabarito(gabarito,quant_questoes);
    int quant_alunos;
    cout<<"Quantos alunos fizeram a prova? ";
    cin>>quant_alunos;
    char *respostas;
    respostas = new char[quant_questoes];
    for(int i=0; i<quant_alunos; i++){
        cout<<"Nota do aluno "<<i+1<<": "<<resultado(gabarito,respostas,quant_questoes)<<endl;
    }
    return 0;
}