#include <iostream>
using namespace std;

int main() {
//valor das vairaveis num1 e num2, variaveis de contas
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;
    
//formula do calculo
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1%num2;
    subt = num1 - num2;
    
//resultado
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    
    return 0;
}