#include<iostream>
using namespace std;

void troca(int &v1, int &v2){
    int aux = v1;
    v1 = v2;
    v2 = aux;
}

int main(){
    int a = 10, b = 20;
    cout<<a<<" "<<b<<endl;
    troca(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}