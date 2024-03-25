#include<iostream>
using namespace std;
//Três amigos Carlos, André e Felipe, decidiram rachar igualmente a conta de um bar. Faça um algoritmo
//para ler o valor total da conta e mostre quanto cada um deve pagar, mas faça com que Carlos e André não
//paguem os centavos. Exemplo: uma conta de 101,53 resulta em 33,00 para Carlos. 33,00 para André e
//35,53 para Felipe.

main ()
{
    setlocale (LC_ALL, "portuguese") ;
    float conta= 0, carlos= 0, andre=0;
    float felipe=0;

    cout<< "Informe o valor total da conta: ";
    cin>> conta;


    carlos= (int)(conta / 3);
    cout<< "Carlos vai pagar: " << carlos << endl;
    andre= (int)(conta / 3);
    cout<< "André vai pagar: " << andre << endl;
    felipe= conta - (carlos + andre);
    cout<< "Felipe vai pagar: " << felipe << endl;

    return 0;


}
