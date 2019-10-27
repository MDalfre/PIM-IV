#include <stdio.h>
#include <stdlib.h>
//Importando as funções descritas em /Services
#include "LugaresDisponiveis.h"
#include "Ingressos.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Unip - PIM IV\n");
	
	char Poltrona[10][10] = {""};
	double ValorEntrada = 10.0;
	int fila, poltrona;
	
	
	
	
	
	LugaresDisponiveis(Poltrona);
	
	
	
	printf("Digite a fila: ");
	scanf("%i", &fila);
	printf("\n");
	printf("Digite a Poltrona: ");
	scanf("%i", &poltrona);
	Poltrona[fila-1][poltrona-1] = 'X';
	printf("clear");
	
	LugaresDisponiveis(Poltrona);
	printf ("%.2f",Ingresso(ValorEntrada));
	return 0;
}
