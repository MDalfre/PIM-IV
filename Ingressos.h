double Ingresso(double valor, int semana) {
  int idade;
  int professorInt;
  char professor;
  double valorDesconto;
  char criancaCarente;
  int criancaCarenteInt;

  void Discurso() {

    printf("Digite a idade do cliente: ");
    scanf("%i", & idade);
    printf("\n");
    if (idade > 18) {
		criancaCarenteInt = 2;
		printf("Cliente e professor da rede publica ? [S - Sim/ N - Nao]: ");
    	scanf("%s", & professor);
    	printf("\n");
      if (professor == 'S' || professor == 's') {
        professorInt = 1;
      } else if (professor == 'N' || professor == 'n') {
        professorInt = 2;
      } else {
        professorInt = 0;
        printf("Erro na entrada de Professor \n");

      }
    } else if (idade < 18) {
		professorInt = 2;
		printf("Crianca carente da rede publica ? [S - Sim/ N - Nao]: ");
    	scanf("%s", & criancaCarente);
    	printf("\n");
      if (criancaCarente == 'S' || criancaCarente == 's') {
        criancaCarenteInt = 1;
      } else if (criancaCarente == 'N' || criancaCarente == 'n') {
        criancaCarenteInt = 2;
      } else {
        criancaCarenteInt = 0;
        printf("Erro na entrada de Crianca Carente \n");

      }
    }
  }

  Discurso();

  while (professorInt == 0) {
    Discurso();
  }
  while (criancaCarenteInt == 0) {
    Discurso();
  }

  if (idade >= 2 && idade <= 12) {
    valorDesconto = (valor - valor / 2);
  } else if (idade >= 60) {
    valorDesconto = (valor - valor / 2);
  } else if (professorInt == 1) {
    valorDesconto = (valor - valor / 2);
  } else if (criancaCarente == 1 && semana == 2) {
    valorDesconto = 0;
  } else {
    valorDesconto = valor;
  }

  return valorDesconto;

}
