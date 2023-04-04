#include <iostream>
using namespace std;
// inicio código de funções 
double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    //condição de divisão por zero
    if (b == 0) {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    } else {
        return a / b;
    }
}
//valor das variaveis
int main() {
    double x = 4;
    double y = 8;

    //adição
    double resultado = somar(x, y);
    cout << x << " + " << y << " = " << resultado << endl;
    //subtração
    resultado = subtrair(x, y);
    cout << x << " - " << y << " = " << resultado << endl;
    //multiplicação
    resultado = multiplicar(x, y);
    cout << x << " * " << y << " = " << resultado << endl;
    //divisão
    resultado = dividir(x, y);
    cout << x << " / " << y << " = " << resultado << endl;

    return 0; //imprime o código
}
