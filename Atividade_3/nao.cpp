#include <stdio.h>

#include <stdlib.h>

int main(){

int m1, m5, m10, m25, m50, m100;

float total;

printf("Digite a quantidade de moedas de 1 centavo: ");

scanf("%d", &m1);

printf("Digite a quantidade de moedas de 5 centavos: ");

scanf("%d", &m5);

printf("Digite a quantidade de moedas de 10 centavos: ");

scanf("%d", &m10);

printf("Digite a quantidade de moedas de 25 centavos: ");

scanf("%d", &m25);

printf("Digite a quantidade de moedas de 50 centavos: ");

scanf("%d", &m50);

printf("Digite a quantidade de moedas de 1 real: ");

scanf("%d", &m100);

total = (m1*0.01) + (m5*0.05) + (m10*0.1) + (m25*0.25) + (m50*0.5) + m100;

printf("%.2f reais economizados.", total);

return 0;
}
