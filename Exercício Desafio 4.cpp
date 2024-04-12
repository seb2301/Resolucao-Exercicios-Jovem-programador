//Desafio 4) FUP que peça um ano e verifique se ano informado é bissexto. Imprima essa



#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	int ano;
	
cout<<"Informe o Ano desejado: ";
cin>>ano;

//bissexto = (ano % 400 == 0) ( (ano % 4 == 0) && (ano % 100 != 0) );

if(ano % 400 == 0){

        cout<< " É um ano bissexto.";}
    else
        if( (ano % 4 == 0) && (ano % 100 != 0) )
            cout<< " É um ano bissexto.";
        else
            cout<< " Não é um ano bissexto.";
	
	
	
	
	
	
}
	