#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int n= 0, i= 1, res, f=0;// f= flag: serve para verificar o estado da informação digitada.

    while (f == 0)
    {
        system("cls"); // limpa a tela
         cout<<"Informe um número natural, menor ou igual a 10, que você deseja saber a tabuada:";
    cin>> n;
    if (n > 0 && n <= 10)
    {
        f=1;
    }
    else
    {
        cout<<"O número informado não está no intervalo permitido."<<endl;
        system("pause"); //congela a tela até que o enter seja pressionado

    }
    }

  while (i<= 10)
  {
      res= i * n;
      cout<< i << "x"<< n << "=" << res << endl;
      i++;
  }
}
