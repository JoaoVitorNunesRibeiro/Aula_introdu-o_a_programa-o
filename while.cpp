#include <iostream>
using namespace std;
//informção do numero que será contado na repetição
int main() {
    int num, i = 1;
    //interface para o usuario inserir um numero inteiro e positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;//impressão do numero digitado
    //repetição
    while (i <= num) {
        cout << i << " ";
        i++;
    }
    return 0;
}
