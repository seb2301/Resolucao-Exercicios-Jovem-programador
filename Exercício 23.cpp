//FUP que solicite um numero e escreva "Batata" enquanto o usuario digita 1;


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	int num;
	
	cout<<"Digite um numero: ";
    cin>>num;

       if (num == 1) {
    	cout<<"\n Batata";
        
       }else 
	    cout<<"Digite um numero: ";
    	cin>>num;
	  
   	}