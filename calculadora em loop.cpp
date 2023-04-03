#include <iostream>
using namespace std;

int main () {
    //char é utilizado para armazenar a resposta caso continue a operção
    char resposta;
    do  {
        //variaveis
        float num1, num2, resultado;
        char operador;
        
        cout << "entre com o primeiro valor: ";
        cin >> num1;
        
        cout << "entre com o operador (+, -, *, /): ";
        cin >> operador;
        
        cout << "entre com o segundo valor: ";
        cin >> num2;
        
        switch (operador) {
            case '+':
            resultado = num1 + num2;
            break;
            case '-':
            resultado = num1 - num2;
            break;
            case '*':
            resultado = num1 * num2;
            break;
            case '/':
            //condição da conta ser dividida por 0, programa avisa que deu erro
            if (num2 == 0) {
                cout << "erro divisão por zero!\n";
                continue; 
            } else {
                resultado = num1 / num2;
                break;
            }
            default:
            cout << "operador invalido\n";
            continue;
        }
        //pergunta pro usuario se quer continuar fazendo operções
        cout << "o resultado é: " << resultado << "\n\n";
        cout << "deseja fazer outro calculo? (S/N)";
        cin >> resposta;
        cout << "\n";
    }while (resposta == 's' || resposta == 'S');
    
    return 0;
}