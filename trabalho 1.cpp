#include <iostream>
#include <stdlib.h>

using namespace std;

// TRABALHO 1

int main(){

float nota1, nota2, nota3, nota4;

    cout << "Digite a sua primeira nota: " << endl;
    cin >> nota1;

    cout << "Digite a sua segunda nota: " << endl;
    cin >> nota2;

    cout << "Digite a sua terceira nota: " << endl;
    cin >> nota3;

    float ME = (nota1 + nota2 + nota3) / 3;

    float MA = (nota1 + (nota2*2) + (nota3*3) + ME) / 7;

    if (MA >= 9){
        cout << "Sua media de aproveitamento eh: " << MA << " (A)" << endl;
    }
    if (MA >= 7.5 & MA < 9){
        cout << "Sua media de aproveitamento eh: " << MA << " (B)" << endl;
    }
    if (MA >= 6 & MA < 7.5){
        cout << "Sua media de aproveitamento eh: " << MA << " (C)" << endl;
    }
    if (MA >= 4 & MA < 6){
        cout << "Sua media de aproveitamento eh: " << MA << " (D)" << endl;
    }
    if (MA < 4){
        cout << "Sua media de aproveitamento eh: " << MA << " (E)" << endl;
    }

//Professor, eu tentei implementar a função switch, mas não consegui colocar as condições dentro dos cases.
//Sinto que esse programa pode ser feito de uma maneira mais funcional e simples, mas esse foi o meu melhor no momento.

    system("pause");

    return 0;
}
