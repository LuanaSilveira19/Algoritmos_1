
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int i, x, aux, cont=0;
    int V[30];
    bool flag;


    cout << "VETOR V: " << endl;

    for(i = 0; i < 30; i++)
    {
        aux = rand() % 41;
        cont++;
        if(i == 0)
            V[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == V[x])
                {
                    //cout << "\nValor duplicado " << aux << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) //mesma coisa que if(flag == true)
                i--;
            else
                V[i] = aux;
        }

    }
      for(i = 0; i < 30; i++)
    {
        cout << V[i] << ", ";
    }
    cout<<endl;
      cout<<endl;
    cout<< "O progrma precisou gerar "<< cont <<" números para preencher o vetor.";

}
