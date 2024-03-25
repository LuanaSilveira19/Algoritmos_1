#include<iostream>
using namespace std;
//Escreva um algoritmo que receba 3 notas escolares de um aluno após ler as notas o algoritmo deverá
//fazer o cálculo da média de forma ponderada, sabendo que a nota 1 tem peso 2.5 a nota 2 tem peso 5.0
//e a nota 3 tem peso 2.5, após classifique o conceito deste aluno segundo a tabela abaixo:
//D = media < 3
//C = media entre 3 e 4.9
//B = media entre 5 e 7.4
//A = media maior que 7.4
main()
{
    setlocale(LC_ALL, "portuguese");
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;


    cout<<"Informe a primeira nota: ";
    cin>> nota1;

    cout<<"Informe a segunda nota: ";
    cin>> nota2;

    cout<<"Informe a terceira nota: ";
    cin>> nota3;

    media= ((nota1 * 2.5) + (nota2 * 5.0) + (nota3 * 2.5) / 10);

    if(media > 7.4)
    cout << "A nota do aluno é A: " << media  << endl;
    else

    if (5 > media < 7.4)
    cout << "A nota do aluno é B: " <<  media << endl;
    else

    if (3 > media <4.9)
    cout << "A nota do aluno é C: " <<  media  << endl;
    else

    if(media < 3)
    cout << "A nota do aluno é D: " << media  << endl;
    else;

}


