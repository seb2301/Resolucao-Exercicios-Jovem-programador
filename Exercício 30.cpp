

#include  <iostream> 
#include  <cstdlib> 
#include  <ctime> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	const int array = 5;
	int numeros[array];
	
	srand(time(nullptr));
	
	for (int i = 0; i <array; ++i){
		int inicio, fim;
		
		switch(i){
			case 0:
				inicio = 1;
				fim = 8;
				break;
			case 1:
				inicio = 9;
				fim = 16;
				break;
			case 2:
				inicio = 17;
				fim = 22;
				break;
			case 3:
				inicio = 23;
				fim = 28;
				break;
			case 4:
				inicio = 24;
				fim = 29;
				break;
				
		}
		
		numeros[i] = rand() % (fim - inicio + 1) + inicio;
		
		cout<<"Vetor de números aleatórios: ";
		
		
	}
	
	
	
	
	
	
	
	
	
	
}