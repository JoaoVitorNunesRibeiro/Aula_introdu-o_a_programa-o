#include <iostream>
using namespace std;

int main () {
    int num;
    // comando DO While
    do {
        cout <<"digite um numero entre 1 e 10:";
        cin >> num;
        // condição
    } while (num < 1 || num > 10);
    //interface da resposta
    cout << "voce digitou o numero " << num << ".";
    
    return 0;
}