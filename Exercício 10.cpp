//FUP que calcule o IMC -solicite se é H ou M e faça o calculo; para homens: (72.7*h)-58    para mulheres: (62.1*h)-44.7

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	
	int sexo;
	double altura;
	
	cout<<"Para calcular o IMC digite \n [1] se for homem ou \n [2] se for mulher: ";
	cin>>sexo;
	cout<<"Digite a sua altura (usando .): ";
	cin>>altura;
	
	
	
	if (sexo == 1){
		cout<<"O IMC Masculino é de: " <<(72.7*altura)-58<< "IMC base \n";
	}
	else if (sexo == 2){
		cout<<"O IMC Feminino é de: " <<(62.1*altura)-44.7<< "IMC base \n";
		
	}
	else {
	
		cout<<"Digite corretamente os valores!";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}