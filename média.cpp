#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    //declarando variaveis das notas
    double nota1, nota2, nota3, nota4;

    cout<<"digite a sua primeira nota do semestre>>>";
    cin>> nota1;
    cout<<"digite a sua segunda nota do semestre>>>";
    cin>> nota2;
    cout<<"digite a sua terceira nota do semestre>>>";
    cin>> nota3;
    cout<<"digite a sua quarta nota do semestre>>>";
    cin>> nota4;
    //formula para somar as notas
    double soma = (nota1 + nota2 + nota3 + nota4);
    //formula para dividir a soma dos semestres
    soma = (soma / 4);
    //condições para aprovado ou reprovado
    cout<<"a sua media no semestre foi: " <<soma << endl << endl;
    if (soma >= 7){
        cout << "parabens! voce foi aprovado!" <<endl;
    }else{
       
        cout << "eita! voce foi reprovado" << endl;
    }
    return 0;
}