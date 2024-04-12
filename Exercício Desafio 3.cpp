//Desafio 3) FUP que solicite três numero e verifique qual é o menor;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	float num,num2,num3;
	
	cout<<"Digite o primeiro número: ";
	cin>>num;
	
	cout<<"Digite o segundo número: ";
	cin>>num2;

	cout<<"Digite o terceiro número: ";
	cin>>num3;
	
	if(num<num2){
		cout<<"O Menor número é: "<<num;
	}
		
		else if(num2 < num ){
		cout<<"O Menor número é: "<<num2;
	}
	else {
	cout<<"O Menor número é: "<<num3;
}
}

