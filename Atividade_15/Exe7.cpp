#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

//arrumar valores duplicados e fazer vetor pros números
int leitura(char texto[100]);

main()
{
    setlocale(LC_ALL,"portuguese");
    int n1, n2, n3, n4, n5, n6;
    int cont=0;
    bool gerou;

    n1= leitura("Informe a aposta 1: ");
    n2= leitura ("Informe a aposta 2: ");
    n3= leitura("Informe a aposta 3: ");
    n4= leitura ("Informe a aposta 4: ");
    n5= leitura("Informe a aposta 5: ");
    n6= leitura("Informe a aposta 6: ");

    cout<<"valor 1: "<<n1<<endl;
    cout<<"valor 2: "<<n2<<endl;
    cout<<"valor 3: "<<n3<<endl;
    cout<<"valor 4: "<<n4<<endl;
    cout<<"valor 5: "<<n5<<endl;
    cout<<"valor 6: "<<n6<<endl;

    srand(time(NULL));
    int sorteio[6], i;
    for(i = 0; i < 6; i++)
    {
        sorteio [i]= rand() % 6 +1;

    }

    cout << "Sorteio: ";
    for(i = 0; i < 6; i++)
    {
        cout<<sorteio [i]<< ",";

    }

    for(i = 0; i < 6; i++)
    {
        if(sorteio[i] == n1 || sorteio[i] == n2 || sorteio[i] == n3|| sorteio[i] == n4 || sorteio[i] == n5 || sorteio[i] == n6 )
        {
            cont++;
            break;
        }
    }

    cout<<endl;
    if(cont == 4)
    {
        cout<<"Parabéns você acertou a quadra!!"<< cont;
    }
    else if(cont == 5)
    {
        cout<<"Parabéns você acertou a quina!!"<< cont;
    }
    else if(cont == 6)
    {
        cout<<"Parabéns você é o noovo milionário!!"<< cont;
    }
    else
    {
        cout<<"Não foi dessa vez, tente de novo!!";
    }



    cout<<endl;
    cout<<"Contador: "<< cont;

}
int leitura(char texto[100])
{
    bool valido;
    int n, x, aposta[6];
    do
    {
        valido=false;
        cout << texto;
        cin >> n;
        fflush(stdin);
        if(n <1 or n >60)
        {
            cout << "\nPosição inválida."<<endl;
            valido = true;
        }
        for(x=0; x<6; x++)
        {
            aposta[x]=n;
        }

    }
    while(valido);
    return n;

}
