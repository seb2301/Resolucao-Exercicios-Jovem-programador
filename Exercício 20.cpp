//FUP que leia:

   // • a percentagem do IPI a ser acrescido no valor das peças
   // • o código da peça 1, valor unitário da peça 1, quantidade de peças 1
   // • o código da peça 2, valor unitário da peça 2, quantidade de peças 2
   // O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.
   //Fórmula : ValorTotal = (valor1quant1 + valor2quant2)*(IPI/100 + 1)

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	double ipi;
	int cod1, cod2;
	double vlUnit1, vlUnit2;
	int qtd1, qtd2;
	
	cout<<"Digite o codigo da peça 1: ";
    cin>>cod1;
    
    cout<<"Digite o valor unitario da peça 1: ";
    cin>>vlUnit1;
    
    cout<<"Digite a quantidade de peças 1: ";
    cin>>qtd1;
    
    cout<<"Digite o codigo da peça 2: ";
    cin>>cod2;
    
    cout<<"Digite o valor unitario da peça 2: ";
    cin>>vlUnit2;
    
    cout<<"Digite a quantidade de peças 2: ";
    cin>>qtd2;
    
    cout<<"Digite a porcentagem do IPI a ser acrescido (%) O valor da taxa deverá ser informado em valores decimais, ex.: 5% informar 0.05: ";
    cin>>ipi;
	
	
	double valorTotal = (vlUnit1 * qtd1 + vlUnit2 * qtd2) * (ipi / 100 + 1);
	
	cout<<"O valor total a ser pago é de: R$ " <<valorTotal;
	
	
}