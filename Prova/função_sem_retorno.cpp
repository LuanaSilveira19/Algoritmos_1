#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void exp(int b, int e);

//não deu certo
main()
{
setlocale(LC_ALL, "portuguese");
 int base, expo;
 cout<<"Informe o valor da base: ";
 cin>>base;
 cout<<"Informe o valor do expoente: ";
 cin>>expo;

 exp(base, expo);
}

void exp(int b, int e)
{
    int i, res=1;
    if(e<0)
    {
        cout<<"Não é permitido expoente negativo";
        return;
    }
    else{
        for(i=0; i<e; i++)
        {
            res*=b;
            cout<<res;
        }
    }
}
