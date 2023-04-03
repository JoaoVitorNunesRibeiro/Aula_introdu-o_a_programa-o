// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
//"int main" seria a primeira interaçõa ou o primeiro código
int main() { //({) é pra iniciar o código
    // Write C++ code here
    float cateto1, cateto2, hipotenusa; //float seria pra adicionarmos produtos pra o código 
    
    cout << "Digite o comprimento do cateto1: "; // cout utilizado quando queremos conversar com o usuario
    cin >> cateto1; //cin pra imprimir o que o usuario digitou
    cout << "Digite o comprimento do cateto2: "; //aspas (") é o texto que queremos que o usario veja
    cin >> cateto2; //ponto e virgula usamos pra finalizar a linha
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); //linha da formula de calculo
    
    cout << "O comprimento da hipotenusa eh: " << hipotenusa << endl; //resultado
    
    return 0; // o professor explicou que é pra imprimir o código
} // (})é pra finalizar o código