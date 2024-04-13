//24. FUP que imprima a tabuada de um numero de 0 a 10;


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	int num;
	int tab [11] = {0,1,2,3,4,5,6,7,8,9,10};
	
	cout<<"Digite um número para exibir a tabuada: ";
	cin>>num;
	
	for (int i =0; i < 11; i++) {
		cout<<num<< " x " <<tab[i]<< " = " <<(num*tab[i])<< "\n";
	}
	
	
	
	
}