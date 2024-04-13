//FUP que calcule o peso de um elevador, onde cada pessoa que entra informa o peso, caso atinga 180KG, o elevador informa que esta no peso maximo;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	const int capMaxima = 180;
    int pesoTotal = 0;
    int pesoPessoa;

        while (true) {
        cout << "Digite o peso da pessoa (ou -1 para encerrar): ";
        cin >> pesoPessoa;

        if (pesoPessoa == -1) {
            break;
        }

        pesoTotal += pesoPessoa;

        if (pesoTotal >= capMaxima) {
            std::cout << "O peso máximo do elevador foi atingido (" << capMaxima << " kg).";
            break;
        }
    }
	
	
	
	
}
	