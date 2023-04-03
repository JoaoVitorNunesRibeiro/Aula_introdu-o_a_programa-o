#include <iostream>
using namespace std;

int main() {
    int num;
    //pede para o usuario colocar valores inteiros e positivos
    cout << "digite um numero inteiro positivo: ";
    cin >> num;
    //imprime o numero digitado
    cout <<"os primeiros " << num << " numeros pares são: ";
    //For faz a inicialização, condição e atualização
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }
    return0;
}