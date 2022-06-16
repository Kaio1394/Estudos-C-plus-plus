#include <iostream>
#include "Cabecalho.h"
using namespace std;

int main()
{
    while (true)
    {
        int numero1, numero2;
        char opcao;

        cout << "Digite dois numeros inteiros" << endl;
        cin >> numero1;
        cin >> numero2;

        maiorNumero(numero1, numero2);

        cout << "Deseja sair? S/N" << endl;
        cin >> opcao;

        if (desejaContinuar(opcao)) {
            cout << "Saindo do programa..." << endl;
            exit(0);
        }
    }

    system("PAUSE");

    return 0;
}
