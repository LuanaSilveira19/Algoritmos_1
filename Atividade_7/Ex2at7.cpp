#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x, A=0, B=0, maior, menor, soma=0, q_impar=0, q_par, q_total=0, porcento_par= 0;

    cout<<"Informe um n�mero:";
    cin>> A;

    cout<<"Informe outro n�mero:";
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
    porcento_par= (q_par * 100) / q_total; //n�o consegui achar o erro dessa

    cout<<"\nA soma dos numeros inteiros entre eles �:" <<soma<<endl;
    cout<<"A quantidade de n�meros inteiros �mpares entre eles �: " <<q_impar<< endl;
    cout<< "A porcentagem de n�meros pares entre eles �: "<< porcento_par<< "%"<<endl;
}
