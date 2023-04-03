#include <iostream>
#include <string>
using namespace std;
 
int main() {
    //informações do personagem
    int life;
    float energy;
    bool status;
    string character;
    //valores das informações 
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Capitão de ferro";
    //programa mostrando as informações
    cout<<life<<endl;
    cout<<energy<<endl;
    cout<<status<<endl;
    cout<<character<<endl;
    
    return 0;
}