#include <iostream>
using namespace std;

int main() {
    //declaração das variaveis
    char op;
    float num1, num2;
    cout << "entre com o operador: +, -, , /:";
    cin >>op;
    cout << "entre com dois valores: ";
    cin >> num1 >> num2;
    //código para fazer a conta com switch
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
        // caso não fazer nenhuma conta, será pedido para colocar denovo, pois o operador pode estar errado
        cout << "operador errado, por favor insira o operador correto...";
        break;
    }
    return 0;
}