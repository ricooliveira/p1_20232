#include <iostream>

using namespace std;

void troca(int x, int y){
    int aux = x;
    x = y;
    y = aux;
}

int main(){
    int a = 10, b = 20;
    cout<<a<<" "<<b<<endl;
    troca(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}