#include<iostream>
using namespace std;
//Escreva um programa que receba um valor referente a uma hora, caso o valor n�o esteja no intervalo
//00 at� as 24 informar que n�o � uma hora v�lida, caso esteja no intervalo calcular e informar quantas
//horas faltam ou j� passaram das 12 horas.

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
        cout << "Restam " << hora << ":00 at� �s 24:00 "<< endl;
        break;

    default:
        cout<< "Hora inexistente";
        break;
    }
    return 0;
}

