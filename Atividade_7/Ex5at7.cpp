#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtdaluno, cont=0 , maior=0, menor=0, aprovado=0, reprovado=0;
    float mediaFinal, SmediaFinal=0, mediaTurma, perAprovado, perReprovado;
    bool primeiro= true;

    cout<<"Informe a quantidade de alunos:";
    cin>>qtdaluno;

    while (cont < qtdaluno)
    {
        cout<<"Informe a m�dia final de cada aluno:";
        cin>>mediaFinal;

        SmediaFinal= SmediaFinal + mediaFinal;

        if (primeiro == true)
        {
            maior= mediaFinal;
            menor= mediaFinal;
            primeiro= false;
        }
    else
    {
        if(mediaFinal > maior)
            maior= mediaFinal;
        if (mediaFinal < menor)
            menor= mediaFinal;
    }
    if(mediaFinal>=6)
        aprovado++;
    else
        reprovado++;

    cont++;
    }
perAprovado= ((aprovado * 100.0)/qtdaluno);//n�o consegui achar o erro dessa
perReprovado= ((reprovado *100.0)/qtdaluno);//n�o consegui achar o erro dessa

mediaTurma= SmediaFinal/ qtdaluno;
cout<<"A media da turma �:"<< mediaTurma <<endl;
cout<<"O maior n�mero �:"<< maior <<endl;
cout<<"O menor n�mero �:"<< menor <<endl;
cout<<"O percentual de alunos aprovados �:"<< perAprovado<<endl;
cout<<"O percentual de alunos reprovados �:"<< perReprovado<<endl;

}
