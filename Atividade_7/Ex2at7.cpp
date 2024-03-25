#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x, A=0, B=0, maior, menor, soma=0, q_impar=0, q_par, q_total=0, porcento_par= 0;

    cout<<"Informe um número:";
    cin>> A;

    cout<<"Informe outro número:";
    cin>> B;

    if(A > B)
    {
        maior= A;
        menor= B;
    }
    else
    {
        maior= B;
        menor= A;
    }
    x= menor + 1;

    while (x < maior)
    {
        soma += x;

        if(x % 2 !=0)
            q_impar++;

        else
            q_par++;
        q_total++;
        x++;
    }
    porcento_par= (q_par * 100) / q_total; //não consegui achar o erro dessa

    cout<<"\nA soma dos numeros inteiros entre eles é:" <<soma<<endl;
    cout<<"A quantidade de números inteiros ímpares entre eles é: " <<q_impar<< endl;
    cout<< "A porcentagem de números pares entre eles é: "<< porcento_par<< "%"<<endl;
}
