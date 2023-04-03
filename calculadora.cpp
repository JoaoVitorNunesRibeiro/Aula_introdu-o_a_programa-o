#include <iostream>
using namespace std;
//mostra qual conta quer fazer, e depois colocar os valores
int main() {
    char op;
    float num1, num2;
    cout << "entre com o operador: +, -, , /:";
    cin >>op;
    cout << "entre com dois valores: ";
    cin >> num1 >> num2;
    // começo para fazer a conta com switch, e não colocar if
    switch (op) {
        case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        //break para a operação no momento que o calculo de cima foi utilizado
        break;
        case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
        case '':
        cout << num1 << "" << num2 << "=" << num1 num2;
        break;
        case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
        default:
        // caso nenhuma conta tenha sido feita, vai pedir para colocar denovo, pois pode ter colocado o operador errado
        cout << "operador errado, por favor insira o operador correto...";
        break;
    }
    return 0;
}