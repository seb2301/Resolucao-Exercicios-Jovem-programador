#include <iostream>

using namespace std;

main() {
    int op;
    system("chcp 65001");
    
    do{
        cout<<"\n \t Escolha uma opção a seguir: \n";
        cout<<"\n [1] Exercício 1";
        cout<<"\n [2] Exercício 2";
        cout<<"\n [3] Exercício 3";
        cout<<"\n [4] Exercício 4";
        cout<<"\n [5] Exercício 5";
        cout<<"\n [6] Use a sua criatividade";
        cout<<"\n [7] Encerrar \n";
        cin>>op;
        switch(op) {
            case 1: {
                int tempo, segundos, minutos, horas;
	
				cout<<"Digite a quantidade de segundos de um evento: ";
				cin>>tempo;
	
				segundos = tempo % 60;
				minutos=((tempo-segundos)/60) % 60;
				horas=tempo / 3600;
	
				cout<<"\n O valor convertidos em horas é de: " <<horas<< " : "<<minutos<< " : "<<segundos;
				
                break;
            };
            case 2: {
		    int num;
		    
			cout<<"Digite um Número: ";
			cin>>num;
				
			cout<<"O Número digitado: "<<num<<" é ";	
				
			if(num % 2 ==0){
				cout<<"Par";
			}	else {
				cout<<"Ímpar";
	}
                break;
            };
            case 3: {
            float custoProd;

            cout<<"Digite o valor do custo de produção de um automóvel: ";
            cin>>custoProd;

            //ValorConsumidor = custoProd + (custoProd + 28% ) + (custoProd + 45%);	

             cout<<"O Valor do automóvel para o consumidor final é de: R$ " <<custoProd + (custoProd/100*28 )+(custoProd/100*45);                
			 
			 break;
			 
            };
            case 4: {
            int num;
	        int tab [11] = {0,1,2,3,4,5,6,7,8,9,10};
	
	        cout<<"Digite um número para exibir a tabuada: ";
	        cin>>num;
	
        	for (int i =0; i < 11; i++) {
	    	cout<<num<< " x " <<tab[i]<< " = " <<(num*tab[i])<< "\n";	}     
			  
	        break;
            };
            case 5: {
            int num;
          	int tab [11] = {0,1,2,3,4,5,6,7,8,9,10};
 	
	        cout<<"Digite um número para exibir a tabuada: ";
         	cin>>num;
	
	        for (int i =0; i < 11; i++) {
	     	cout<<num<< " x " <<tab[i]<< " = " <<(num*tab[i])<< "\n";	}
	     	
                break;
            };
            case 6: {
                cout<<"Sendo criativo";
                break;
            };
            case 7: {
                cout<<"Finalizando";
                break;
            };
            default:
                cout<<"\nOpção inválida";
                break;
        }
    }while(op != 7);
    cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}

