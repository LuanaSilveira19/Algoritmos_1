#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{

    setlocale(LC_ALL,"Portuguese");
    int x, mes;
    float v, p, vfim, rendam;
    setlocale(LC_ALL,"Portuguese");

    cout<<fixed;
    cout.precision(2);

    cout<<"Informe o valor inicial:";
    cin>> v;

    cout<< "Informe a quantidade de meses:";
    cin>> mes;

    cout<< "Informe o percentual de correção:";
    cin>> p;

    cout<< "Mês\t"<< "Valor inicial\t"<< "Rendimento\t"<< "Correção"<<endl;

    for( x=1 ; x <= mes ; x++ )

        {
            rendam= v *(p /100.0);
            vfim= v + rendam;
            cout<< x << "\t"<<  v << "\t\t" << rendam << "\t\t"  <<vfim<<endl;
            v = vfim; //atualiza o valor inicial
        }
}
