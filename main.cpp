#include <iostream>
#include <cmath>
#include "Cabecalho.h"
using namespace std;

// Global variable
int const VALOR_A = 1;
int const VALOR_B = 2;

float divisao(int a, int b){
    return (float)a / (float)b;
}

static int potencia(int x, int y = 2){
    return pow(x, y);
}
int main()
{
    cout << potencia(10, 3) << endl;
    while (true)
    {
        int numero1, numero2;
        char opcao;

        cout << "Writer two numbers" << endl;
        cin >> numero1;
        cin >> numero2;

        maiorNumero(numero1, numero2);

        cout << "Do you want to quit program? Y/N" << endl;
        cin >> opcao;

        if (desejaContinuar(opcao)) {
            cout << "Quiting from program..." << endl;
            exit(0);
        }
    }

    system("PAUSE");

    return 0;
}
