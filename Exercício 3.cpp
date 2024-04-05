//FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	float peso, peso2, peso3, peso4, peso5;
	
	cout<<"Digite o peso da primeira pessoa: ";
	cin>>peso;
	
	cout<<"Digite o peso da segunda pessoa: ";
	cin>>peso2;
	
	cout<<"Digite o peso da terceira pessoa: ";
	cin>>peso3;
	
	cout<<"Digite o peso da quarta pessoa: ";
	cin>>peso4;
	
	cout<<"Digite o peso da quinta pessoa: ";
	cin>>peso5;
	
	
	cout<<"A média dos 5 pesos será de: R$  " <<(peso+peso2+peso3+peso4+peso5)/5;
}