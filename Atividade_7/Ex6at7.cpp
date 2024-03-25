#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x = 1;
    float soma, n, media, maior, menor, volta ;
    cout<<fixed;
    cout.precision(2);
    while(x <= 5)
    {
        cout << "Informe o tempo da volta " << x << ": "<<endl;
        cin >> n;
        soma = soma + n;
        media= soma / 5.0;
        if (x == 1)
        {
            maior = n;
            menor = maior;
        }

        else if (n > maior)
        {
            maior = n;
        }
        else if (n < menor)
        {
            menor = n;
        }
        x++;
    }

    cout <<"\n\n Tempo total de prova: " << soma << "min"<<endl;
    cout <<"\n\n Média de tempo das voltas: " << media<<endl;
    cout <<"\n\n Maior tempo da corrida: " << maior<< " na volta"<< x <<endl;
    cout <<"\n\n Menor tempo da corrida: " << menor<<" na volta"<<endl;
}
