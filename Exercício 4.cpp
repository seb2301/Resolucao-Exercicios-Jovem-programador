//4. FUP que leia uma temperatura em graus Celsius e apresente convertida em graus Fahrenheit. A fórmula de conversão é : F = (9*C+160)/5 Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	float graus;
	
	cout<<"Digite o valor de graus celsius para conversão: ";
	cin>>graus;
	
	cout<<"Os graus convertidos para Fahrenheit são de: " <<(9*graus+160)/5;
	
	
	
	
}