#include <iostream>
#include <ctime>
using namespace std;
#define TAM 7
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int V[TAM], valor, aux;
    bool repetido, trocou;
    int contPar=0, cont60=0;
    for(int i=0; i<TAM; i++)
    {
        do
        {
            repetido = false;
            cout << "Informe um valor para V [" << i << "]: ";
            cin >> valor;
            for(int j=0; j<i; j++)//loop de 0 até (i-1) -> o vetor foi preenchido com valores não repetidos até (i-1)
            {
                if(V[j] == valor)
                    repetido = true;
            }
            if(repetido == true)
                cout << "O valor " << valor << " já existe no vetor, digite um valor diferente!\n";
            }
        while(repetido == true);
//adiciona um valor não repetido
        V[i] = valor;
    }
    cout << endl;
    for(int i=0; i<TAM; i++)
    {
        if(V[i]%2 == 0)
            contPar++;
        if(V[i] > 60)
            cont60++;
    }

    int PAR[contPar];
    int idxPar = 0;
    for(int i=0; i<TAM; i++)
    {
        if(V[i]%2 == 0)
        {
            PAR[idxPar] = V[i];
            idxPar++;
        }
    }
//ordenar
    do
    {
        trocou = false;
        for(int i=0; i<contPar-1; i++)
        {
            if(PAR[i] < PAR[i+1]) //trocar
            {
                aux = PAR[i];
                PAR[i] = PAR[i+1];
                PAR[i+1] = aux;
                trocou = true;
            }
        }
    }
    while(trocou == true);
    cout << "\nNumero de elementos maiores que 60: " << cont60 << endl;
    cout << "Vetor de elementos pares: ";
    for(int i=0; i<contPar; i++)
    {
//mostra
        cout << PAR[i];
        if(i!=contPar-1)
            cout << ", ";
    }
    cout << endl;
}
