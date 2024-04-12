//FUP que calcule o imposto de renda de um contribuinte. Os dados de entrada são: o CPF(int), o número de dependentes e a renda mensal. Para cada dependente será feito um desconto de 5% do salário mínimo por dependente. Os valores da alíquota para cálculo do imposto são:

//   Renda Mensal	         Alíquota
//   Até 2 salários mínimos	  Isento
//   2 < salários mínimos   <= 3	5%
//   3 < salários mínimos   <= 5	10%
//   5 < salários mínimos   <= 7	15%
//   Salários mínimos       > 7	    20%


#include <iostream>

using namespace std;

int main() {
	system("chcp 65001");
	system("cls");
	float cpf;
    int dependentes;
    double renda;
	double tresSalarios = 0.05;
	double cincoSalarios = 0.1;
	double seteSalarios = 0.15;
	double acimaDeSete = 0.20;
	double salarioMinimo = 1412.00;
	double isento = 0.0;
	
	cout<<"Digite o seu CPF: ";
    cin>>cpf;
    cout<<"Digite o numero de dependentes: ";
    cin >>dependentes;
    cout<<"Digite a sua renda mensal: R$ ";
    cin>>renda;
	
	double descDep = dependentes * 0.05 * salarioMinimo;
    double rendaLiquida = renda - descDep;
    double aliquota;

 if (rendaLiquida <= 2 * salarioMinimo) {
        aliquota = isento;
    } else if (rendaLiquida <= 3 * salarioMinimo) {
        aliquota = tresSalarios;
    } else if (rendaLiquida <= 5 * salarioMinimo) {
        aliquota = cincoSalarios;
    } else if (rendaLiquida <= 7 * salarioMinimo) {
        aliquota = seteSalarios;
    } else {
        aliquota = acimaDeSete;
    }

	double impostoRenda = rendaLiquida * aliquota;
	
	cout<<"O seu imposto de renda é de: R$ " <<impostoRenda;
	
	
	
}

