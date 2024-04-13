// FUP que preencha um array com 15 números aleatórios.


#include  <iostream> 
#include  <cstdlib> 
#include  <ctime> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	const int tamArray = 15;
    int numeros[tamArray];

    srand(time(nullptr));

    for (int i = 0; i < tamArray; ++i) {
        numeros[i] = rand() % 100; 
    }

  cout<<"Array de numeros aleatorios:";
    for (int i = 0; i < tamArray; ++i) {
    cout << numeros[i] << " ";
    }
	
	
	
}