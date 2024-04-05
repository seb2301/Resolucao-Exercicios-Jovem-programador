//6. FUP que solicite a duração de um evento em segundos e imprima em horas, minutos e segundos;


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	int tempo, segundos, minutos, horas;
	
	cout<<"Digite a quantidade de segundos de um evento: ";
	cin>>tempo;
	
	segundos = tempo % 60;
	minutos=((tempo-segundos)/60) % 60;
	horas=tempo / 3600;
	
	
	cout<<"\n O valor convertidos em horas é de: " <<horas<< " : "<<minutos<< " : "<<segundos;
	
	
	
	
}