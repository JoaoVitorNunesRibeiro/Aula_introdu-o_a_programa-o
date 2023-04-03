#include <iostream>
using namespace std;
//deu a informção do numero que vai ser contado na repetição
int main() {
    int num, i = 1;
    //interface para o usuario dar o numero inteiro
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    //a repetição
    while (i <= num) {
        cout << i << " ";
        i++;
    }
    return 0;
}