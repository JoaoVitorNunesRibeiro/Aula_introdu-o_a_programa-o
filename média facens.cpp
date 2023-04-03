#include <iostream>
#include <stdlib.h>
using namespace std;
//inserindo bibliotecas
int main() {
    //variaveis das avaliações
    double ac1, ac2, af;
    //valor da variavel ac1
    cout << "Digite a sua nota da ac1 >>>"; 
    cin >> ac1;
    //valor da variavel ac2
    cout << "Digite a sua nota da ac2 >>>";
    cin >> ac2;
    //valor da variavel af
    cout << "Digite a sua nota da af >>>";
    cin >> af;
    //tranformação das notas em média
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    af = (af * 0.50);
  
    double soma = (ac1 + ac2 + af);
    //resultado da soma de media 
    cout << "A sua média do semestre foi: " << soma << endl << endl;
    //condições dos resultado das notas (aprovado ou reprovado)
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{
        cout << "Eita! Você foi reprovado" << endl;
    }
    return 0;

}