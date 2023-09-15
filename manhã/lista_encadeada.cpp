#include <iostream>

using namespace std;

struct NoLista{
    int dado;
    NoLista* prox;
};

NoLista* criar_lista(){
    return NULL;
}

void append(NoLista*&l, int info){
    NoLista* novo = new NoLista;
    novo->dado = info;
    novo->prox = NULL;
    if(l == NULL)
        l = novo;
    else{
        NoLista *p = l;
        while(p->prox != NULL)
            p = p->prox;
        p->prox = novo;
    }
}

void imprimir(NoLista*l){
    NoLista*p = l;
    if(l==NULL)
        cout<<"Lista vazia."<<endl;
    else{
        while(p != NULL){
            cout<<p->dado<<" ";
            p = p->prox;
        }
    }
}

int main(){
NoLista* l1 = criar_lista();
int valor;
cout<<"Valor: ";
cin>>valor;
while(valor >= 0){
    append(l1,valor);
    cout<<"Outro valor: ";
    cin>>valor;
}
imprimir(l1);

    return 0;
}