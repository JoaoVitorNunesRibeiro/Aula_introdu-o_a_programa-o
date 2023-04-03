// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    float base, altura, area; //variaveis
    
    cout << "Digite a base do retangulo: "; //pede informação da variavel base pro usuario
    cin >> base; //imprime base
    cout << "Digite a altura do retangulo: "; //pede informação da variavel altura pro usuario
    cin >> altura; //imprime altura
    
    area = base * altura; //formula pra calcular a area do retangulo
    
    cout << "A area do retangulo eh: " << area << endl; //resultado
    
    return 0; //imprime o código
}