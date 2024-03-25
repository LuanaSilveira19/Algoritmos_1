#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

float leitura(char texto[100]);
float calcula(float n1, float n2);

main()
{
    setlocale(LC_ALL,"portuguese");
    float salario, percentual;
    salario= leitura("Informe o salário: ");
    percentual= leitura ("Informe o percentual de reajuste: ");

    cout << "O valor reajustado será de: " << calcula(salario,percentual);
}
float leitura(char texto[100])
{
    float n;
    cout << texto;
    cin >> n;
    fflush(stdin);
    return n;
}
float calcula(float n1, float n2)
{
    float reajuste, valor;
    cout<<fixed;
    cout.precision(3);
    reajuste= n1 * n2/100.0;
    valor= n1 + reajuste;

    return valor;
}
