//FUP que solicite quantidade de pessoas, depois solicite a altura de cada uma e calcule a media da altura das pessoas;

#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");

	int qtdPessoas;
    double altura;
    
	cout<<"Digite a quantidade de pessoas: ";
	cin>>qtdPessoas;

	double alturas[qtdPessoas];
	
	for (int i = 0; i < qtdPessoas; ++i) {
        cout << "Digite a altura da pessoa " << i + 1 << " (em metros): ";
        cin >> altura;
		alturas[i] = altura;
    }

	double somaAlturas = 0.0;
	
    for (int i = 0; i < qtdPessoas; ++i) {
        somaAlturas += alturas[i];
    }

    double mediaAlturas = somaAlturas / qtdPessoas;

    cout<<"A media da altura das pessoas e: " << mediaAlturas << " metros";


}