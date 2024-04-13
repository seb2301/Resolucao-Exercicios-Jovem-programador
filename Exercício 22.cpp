//FUP que leia a velocidade permitida em uma via, a velocidade praticada por um motorista, e informe se o mesmo receberá multa ou não, e o valor a pagar. Caso tenha excedido a velocidade em até 20% da permitida, o motorista receberá uma multa de R$ 102,00. Caso tenha excedido a velocidade acima de 20% da permitida, o motorista receberá uma multa de R$ 500,00.



#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
		double velocidadeMaxima, velocidadeMarcada;

    cout<<"Digite a velocidade permitida (em km/h): ";
    cin>>velocidadeMaxima;

    cout<<"Digite a velocidade praticada pelo motorista (em km/h): ";
    cin>>velocidadeMarcada;

    double referencia = velocidadeMarcada - velocidadeMaxima;

    if (referencia <= 0) {
    cout<<"O motorista não receberá multa.";
    } 
	else if (referencia <= 0.20 * velocidadeMaxima) {
        cout<<"O motorista receberá uma multa de R$ 102,00.";
    } 
	else {
        cout<<"O motorista receberá uma multa de R$ 500,00.";
	}
	
}