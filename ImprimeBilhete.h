void ImprimeBilhete(double ValorEntradaFinal, int fila, int poltrona, int dia, int mes, int ano, char NomePeca[37]) {

    //Realiza a impressão do bilhete na tela.
    system("cls");
    system("color 0a");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("||===============BILHETE===============<>\n");
    printf("||                                     \n");
    printf("||              %i/%i/%i              \n", dia, mes, ano);
    printf("||                                     \n");
    printf("||           %s\n", NomePeca);
    printf("||                                     \n");
    printf("||        FILA:%i   POLTRONA:%i        \n", fila, poltrona);
    printf("||                                     \n");
    printf("||                                     \n");
    printf("||        VALOR ENTRADA:R$%.2f        \n", ValorEntradaFinal);
    printf("||                                     \n");
    printf("||=====================================<>\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

}
