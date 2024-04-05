//2. FUP que leia o valor da hora do trabalhador e a quantidade de horas trabalhadas.Imprima o valor que o trabalhador deverá receber ao final do mês.;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	float valHora, hsTrab;
	
	cout<<"Digite o valor da hora trabalhada";
	cin>>valHora;
	
	cout<<"Digite a quantidade de horas do trabalhador";
	cin>>hsTrab;
	
	cout<<"O salário do trabalhador será de: R$  " <<valHora*hsTrab;
}