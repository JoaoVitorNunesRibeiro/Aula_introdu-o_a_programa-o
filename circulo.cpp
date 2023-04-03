// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    float raio, area; //variaveis
const float PI = 3.14159; //valor de PI
    //pede dados pro usuario e imprime
    cout << "Digite a area do circulo: ";
    cin >> raio;
    //formula pra calcular area do circulo
    area = PI * raio * raio;
    //resultado
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}