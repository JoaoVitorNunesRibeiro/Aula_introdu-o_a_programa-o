#include <iostream>
using namespace std;
//valor das variaveis de x e y
int main () {
    int x = 10;
    int y = 20;
    //condição do valor de x ser maior
    if (x>y) {
        cout <<"x é maior que y" << endl;
    }
    //condição do valor de x ser menor
    if (x<y) {
        cout <<"x é menor que y" << endl;
    }
    //condição do valor de x ser maior ou igual
    if (x >= y) {
        cout << "x é maior ou igual a y" << endl;
    }
    //condição do valor de x ser menor ou igual
    if (x <= y) {
        cout << "x é menor ou igual a y" << endl;
    }
    //condição do valor de x ser diferente
    if (x != y) {
        cout << "x é diferente de y" << endl;
    }
    return 0;
}