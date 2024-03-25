
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

//#define TAM 4 caso seja necessário mudar
using namespace std;
//cout<<fixed;
//cout.precision(2);
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL)); //inicializando o randômico
    int i, x, aux, soma=0, num, cont=0;
    int vet[5];
    bool flag;

    cout << "VETOR GERADO COM DADOS DUPLICADOS: " << endl;
    for(i = 0; i < 5; i++)
    {
        vet[i] = rand() % 5;
        cout << vet[i] << ", ";
    }
     cout << "\n\nVETOR COM VALORES DE TRAS PARA FRENTE: " << endl;
    for(i = 5-1; i>=0; i--)
    {
        cout << vet[i] << ", ";
    }
    cout<<endl;

     cout <<"SOMA DOS VALORES DO VETOR: ";//cuidar se a soma vai ser int ou float
    for(i = 0; i < 5; i++)
    {

        soma+=vet[i];
    }
    cout<<soma;
    cout<<endl;
cout<<endl;
      cout <<"CONTAGEM DE UM DETERMINADO VALOR DO VETOR- informe o valor: ";
      cin>>num;
    for(i = 0; i < 5; i++)
    {
if(vet[i]== num)
{
    cont++;
}
    }
   cout<<"O VALOR SE REPETIU "<<cont<< " VEZES!";
    cout<<endl;

    cout << "\nVETOR GERADO SEM DADOS DUPLICADOS: " << endl;

    for(i = 0; i < 5; i++)
    {
        //rotina para não permitir dados duplicados no vetor
        aux = rand() % 5;
        //cont++;
        if(i == 0)
            vet[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == vet[x])
                {
                    //cout << "\nValor duplicado " << aux << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) //mesma coisa que if(flag == true)
                i--;
            else
                vet[i] = aux;
        }
    }
    for(i = 0; i < 5; i++)
    {
        cout << vet[i] << ", ";
    }

    //ordena trocando os elementos que estão à frente
    for(i = 0; i < 4; i++)
    {
        for(x = i + 1; x < 5; x++)
        {
            if(vet[i] > vet[x])
            {
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }


    cout << "\n\nVETOR ORDENADO EM ORDEM CRESCENTE: " << endl;
    for(i = 0; i < 5; i++)
    {
        cout << vet[i] << ", ";
    }

    //ordena em ordem descrescente
    for(i = 0; i < 4; i++)
    {
        for(x = i + 1; x < 5; x++)
        {
            if(vet[i] < vet[x])
            {
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }

    cout << "\n\nVETOR ORDENADO EM ORDEM DECRESCENTE: " << endl;
    for(i = 0; i < 5; i++)
    {
        cout << vet[i] << ", ";
    }


}
