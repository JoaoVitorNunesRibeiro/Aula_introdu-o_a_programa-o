// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    float base, altura, area; //declaração das variáveis 
    
    cout << "Digite a base do triangulo: "; // lugar onde o usario colocará os dados da base
    cin >> base; //imprime base
    cout << "Digite a altura do triangulo: "; //lugar onde o usario colocará os dados da altura
    cin >> altura; //imprime a altura
    
    area = (base * altura) / 2; //formula pra calcular area do triangulo
    
    cout << "A area do triangulo eh: " << area << endl; //resultado da area do triangulo
    
    return 0; //imprime o codigo
}