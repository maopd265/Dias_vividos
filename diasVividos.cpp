#include<stdio.h>
#include<stdlib.h>




int main()
{
	int totalDeDias, ano ,mes, dias,aux;
	printf("\nInsira o numero de dias:");
	scanf("%d",&totalDeDias);
	ano=totalDeDias/365;
	aux=totalDeDias%365;
	mes=aux/30;
	dias=aux%30;

     printf("\n%d ano(s) %d mese(s)  %d dia(s)",ano,mes,dias);	
	
	return 0;
}
