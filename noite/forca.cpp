#include <iostream>
#define MAX_ERRORS 6

using namespace std;

void inicializar(bool vet[],int tam){
    for(int i=0; i<tam; i++){
        vet[i] = false;
    }
}

void display(string palavra, bool descobertas[], int erros){
    for(int i=0; i<palavra.length(); i++){
        if(descobertas[i]){
            cout<<palavra[i]<<" ";
        } else {
            cout<<"_ ";
        }
    }
    cout<<endl;
    cout<<"Voce tem direito a "<<MAX_ERRORS-erros<<" erros."<<endl;
}

void palpite(string palavra, bool descobertas[], char letra, int &erros){
    bool acertou = false;
    for(int i=0; i<palavra.length(); i++){
        if(palavra[i] == letra){
            descobertas[i] = true;
            acertou = true;
        } 
    }
    if(!acertou){
        erros++;
    }
}

bool fim_de_jogo(string palavra, bool descobertos[], int erros){
    if(erros == MAX_ERRORS)
        return true;
    else {
        for(int i=0; i<palavra.length(); i++){
            if(!descobertos[i])
                return false;
        }
        return true;
    }
}

int main(){
    string palavra;
    int erros = 0;
    char letra;
    cout<<"Qual e a palavra a ser descoberta? "<<endl;
    cin>>palavra;
    bool descobertas[palavra.length()];
    inicializar(descobertas, palavra.length());
    display(palavra,descobertas,erros);
    // LOOP do jogo
    while(!fim_de_jogo(palavra,descobertas,erros)){
        cout<<"Palpite: ";
        cin>>letra;
        palpite(palavra,descobertas,letra,erros);
        display(palavra,descobertas,erros);
    }
    if(erros == MAX_ERRORS){
        cout<<"Voce perdeu."<<endl;
    } else {
        cout<<"Voce ganhou!"<<endl;
    }
    return 0;
}