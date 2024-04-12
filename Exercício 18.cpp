//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
float custoProd;

cout<<"Digite o valor do custo de produção de um automóvel: ";
cin>>custoProd;

//ValorConsumidor = custoProd + (custoProd + 28% ) + (custoProd + 45%);	

cout<<"O Valor do automóvel para o consumidor final é de: R$ " <<custoProd + (custoProd/100*28 )+(custoProd/100*45);
	
	
	
	
	
}





