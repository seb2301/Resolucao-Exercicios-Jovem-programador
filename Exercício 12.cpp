#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	int num;
		cout<<"Digite um Número: ";
		cin>>num;
	
	cout<<"Este número "<<num<< " é ";
		if(num >=0){
		cout<<"positivo. (Y)";
	}	else{
		cout<<"negativo.";
	}
}