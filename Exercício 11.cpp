//FUP que solicite a operação (+,-,/,*) e dois numeros, calcule a operação solicitada e informe o resultado;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	
	double num, num2;
	int operacao;
	
	cout<<"Digite um número: ";
	cin>>num;
	
	cout<<"Digite a operação desejada: \n[1] - Para operação de soma (+) \n[2] - Para operação de subtração (-)\n[3] - Para operação de divisão (/)\n[4] - para operação de multiplicação (*)";
	cin>>operacao;
	
	cout<<"Digite outro número para finalizar a operação: ";
	cin>>num2;
	
	
	if(operacao==1){
	
	cout<<"O resultado da operação é de: " <<num+num2;
}
else if (operacao==2){
	cout<<"O resultado da operação é de: " <<num-num2;

}
	
	else if (operacao==3){
	cout<<"O resultado da operação é de: " <<num/num2;
}
	
		else if (operacao==4){
	cout<<"O resultado da operação é de: " <<num*num2;
}
	
	else
cout<<"Digite corretamente a operação: ";	
}

