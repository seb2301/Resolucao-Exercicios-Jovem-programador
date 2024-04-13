//FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	int numPessoas = 5;
	double pesos [numPessoas];
	double somaPesos = 0.0;
	
	for (int i = 0; i < numPessoas; ++i) {
        cout << "Digite o peso da pessoa " << i + 1 << " (em kg): ";
        cin >> pesos[i];
        somaPesos += pesos[i];
    }
	
	double media = somaPesos / numPessoas;
	
	cout<<"A media dos pesos das pessoas é de: " << media << " kg";
	
}