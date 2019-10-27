#include <stdio.h>
#include <stdlib.h>
//Importando as funções descritas em /Services
#include "LugaresDisponiveis.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Unip - PIM IV\n");
	//char NomedaSessao[100] = "";
	//printf("Digite o nome da Sessao: ");
	//scanf("%[^\n]s", NomedaSessao);
	//setbuf(stdin, NULL);
	//printf("Nome da Sessao: %s \n", NomedaSessao);
	int teste[0][10] = {0,1,2,3,4,5,6,7,8,9} ;
	int linha = 0;
	int coluna = 3;
	//scanf("%i", coluna);
	//teste [linha][coluna] = 12;
	//printf("%s", teste[linha][coluna]);
	LugaresDisponiveis(teste);
	return 0;
}
