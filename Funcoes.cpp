#include<iostream>
using namespace std;

void maiorNumero(int numero1, int numero2) {
    bool simOuNao = (numero1 > numero2) ? true : false;
    switch (simOuNao)
    {
    case true:
        cout << "Numero 1 eh maior do que o numero 2." << endl;
        break;
    case false:
        cout << "Numero 2 eh maior do que o numero 1." << endl;
        break;
    default:
        break;
    }
}

bool desejaContinuar(char opcao) {
    return (opcao == 'S' || opcao == 's') ? true : false;
}
