#include <iostream>
using namespace std;
//valores das variaveis a, b e c
int main () {
    int a = 5;
    int b = 10;
    int c = 15;
//uso do operador AND
if (a<b && b <c) {
    cout << "a ordem é: a, b, c" << endl;
}
//uso do operador OR (
if (a>b || b >c) {
    cout<< "pelo menos uma das condições é verdadeira"<<endl;
}
//uso do operador NOT (!)
if (!(a == b)) {
    cout << "a é diferente de b" << endl;
}
return 0;
}