#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salario, inss, ir , sal_liquido;
	
	printf("\n Digite seu salario bruto");
	scanf("%f", &salario);
	
	if(salario <= 1693.72) {
		inss = salario * 0.08;
	} else if(salario >= 1693.73 && salario <= 2822.90) {
		inss = salario * 0.09;
	}
	
	sal_liquido = (salario - inss) -ir;
	
	printf("\n Desconte Inss: %f", inss);
	printf("\n Salario liquido: %0.1f", sal_liquido);
	
	return 0;
}
