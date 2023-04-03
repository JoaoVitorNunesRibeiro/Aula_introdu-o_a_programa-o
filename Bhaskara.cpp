// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    float a, b, c, x1, x2, delta; //variáveis
    //cout pra pedir pro usuario o valor das variaveis, cin imprime os valores
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    //inicio da formula
    delta = pow(b, 2) - 4 * a * c;
    //condição
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        cout << "As raizes da equaçao sao: " << x1 << " e " << x2 << endl;
    }
    else { 
        cout << "A equação não tem raizes reais. " << endl; //outra condição
    }
    
    return 0;
}