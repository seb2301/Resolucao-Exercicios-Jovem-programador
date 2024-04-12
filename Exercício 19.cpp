//FUP que calcule os juros de determinado capital, taxa e tempo informados pelo usuário e apresente na tela o valor do capital informado, os juros e o valor do montante da operação. O valor da taxa deverá ser informado em valores decimais, ex.: 5% informar 0.05 e o tempo devera ser informado em dias.


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	double capital, taxa, juros, montante;
	int dias;
	
	cout<<"Digite o valor do capital inicial em R$: ";
	cin>>capital;
	
	cout<<"Digite o valor da taxa que deve ser aplicada no capital: O valor da taxa deverá ser informado em valores decimais, ex.: 5% informar 0.05: ";
	cin>>taxa;
	
	cout<<"Digite o prazo que o capital terá: o tempo devera ser informado em dias: ";
	cin>>dias;
	
	juros = capital*taxa*dias;
	
	montante = capital+juros;
	
	cout<<"O valor do capital é de: R$ " <<capital<< "\n";
	cout<<"O valor dos juros é de: R$ " <<juros<< "\n";
	cout<<"O valor do montante será de: R$ " <<montante<< "\n";
	
	
}