#include<iostream>
using namespace std;

void maiorNumero(int numero1, int numero2) {
    bool simOuNao = (numero1 > numero2) ? true : false;
    switch (simOuNao)
    {
    case true:
        cout << "Number 1 is greater than number 2." << endl;
        break;
    case false:
        cout << "Number 2 is greater than number 1." << endl;
        break;
    default:
        break;
    }

}

bool desejaContinuar(char opcao) {
    return (opcao == 'Y' || opcao == 'y') ? true : false;
}
