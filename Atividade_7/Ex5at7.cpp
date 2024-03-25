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
        cout<<"Informe a média final de cada aluno:";
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
perAprovado= ((aprovado * 100.0)/qtdaluno);//não consegui achar o erro dessa
perReprovado= ((reprovado *100.0)/qtdaluno);//não consegui achar o erro dessa

mediaTurma= SmediaFinal/ qtdaluno;
cout<<"A media da turma é:"<< mediaTurma <<endl;
cout<<"O maior número é:"<< maior <<endl;
cout<<"O menor número é:"<< menor <<endl;
cout<<"O percentual de alunos aprovados é:"<< perAprovado<<endl;
cout<<"O percentual de alunos reprovados é:"<< perReprovado<<endl;

}
