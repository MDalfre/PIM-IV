double Ingresso(double valor) {
  int idade;
  int professorInt;
  char professor;
  double valorDesconto;

  void Discurso() {

    printf("Digite a idade do cliente: ");
    scanf("%i", & idade);
    printf("\n");
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
  }

  Discurso();
  
  while (professorInt == 0) {
    Discurso();
  }

  if (idade >= 2 && idade <= 12) {
    valorDesconto = (valor - valor / 2);
  } else if (idade >= 60) {
    valorDesconto = (valor - valor / 2);
  } else if (professorInt == 1) {
    valorDesconto = (valor - valor / 2);
  } else {
    valorDesconto = valor;
  }

  return valorDesconto;

}
