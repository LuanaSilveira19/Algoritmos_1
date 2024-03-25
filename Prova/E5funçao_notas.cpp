#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;
float leitura(char texto[100]);
float media(float nota_1, float nota_2, float nota_3, char op);

char leitura2(char texto[100]);

float media(float nota_1, float nota_2, float nota_3, char op)
{
    if(op == 'A')
    {
        return ((nota_1 + nota_2 + nota_3)/3);
    }
    else if( op == 'P')
    {
        return ((nota_1*5.0 + nota_2*3.0 + nota_3*2.0)/10.0);
    }
    else if (op == 'H')
    {
        return(3.0 / (1.0 / nota_1 + 1.0 / nota_2 + 1.0 / nota_3));
    }

}
main()
{

    setlocale(LC_ALL,"portuguese");
    float nota_1,nota_2, nota_3;
    char op;

    nota_1 = leitura("Informe a nota 1: ");
    nota_2 = leitura("Informe a nota 2: ");
    nota_3= leitura ("Informe a nota 3: ");
    op = leitura2 ("Informe a letra (A, P ou H): ");


    cout << "Valor 1: " << nota_1 << endl;

    cout << "Valor 2: " << nota_2 << endl;

    cout << "Valor 3: " << nota_3 << endl;

    cout << "op: " << op << endl;
    cout<<fixed;
    cout.precision(3);
    cout<< "Média do aluno:"<< media(nota_1, nota_2, nota_3, op);

    return 0;
}
float leitura(char texto[100])
{
    float n;
    cout << texto;
    cin >> n;
    fflush(stdin);
    return n;
}
char leitura2(char texto[100])
{
    char n;
    cout << texto;
    cin >> n;
    fflush(stdin);
    return n;
}



