#include<iostream>
using namespace std;
//Escreva um programa que receba um valor referente a uma hora, caso o valor não esteja no intervalo
//00 até as 24 informar que não é uma hora válida, caso esteja no intervalo calcular e informar quantas
//horas faltam ou já passaram das 12 horas.

main()
{
    setlocale(LC_ALL, "portuguese");
    int hora= 0;

    cout <<"Informe a hora atual:";
    cin>> hora;

    switch(hora)
    {
    case 1 ... 24:
        hora= 24 - hora;
        cout << "Restam " << hora << ":00 até às 24:00 "<< endl;
        break;

    default:
        cout<< "Hora inexistente";
        break;
    }
    return 0;
}

