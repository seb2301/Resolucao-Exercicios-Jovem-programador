//FUP que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 7, a mensagem "Recuperação", caso a média se igual ou superior a 5 e inferior a 7, ou a mensagem “Reprovado”, caso a média seja inferior a 5.

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	float nota1=0, nota2=0, nota3=0, media=0;
	
	
	cout<<"Digite a primeira nota: ";
	cin>>nota1;
	
	cout<<"Digite a segunda nota: ";
	cin>>nota2;
	
	cout<<"Digite a tereira nota: ";
	cin>>nota3;
	
	
//	cout<<nota1<<" - "<<nota2<<" - "<<nota3;


media=(nota1+nota2+nota3)/3;
cout<<"\n A Sua Média é: "<<media;

if (media <5){
	cout<<"\n REPROVADO";
	}else if(media >= 5 && media <7){
		cout<<"\n RECUPERAÇÃO";
	}else{
		cout<<"\n APROVADO";
	}





}

















