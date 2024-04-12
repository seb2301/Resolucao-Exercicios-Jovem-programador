//FUP que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. - media ponderada

#include <iostream>

using namespace std;

int main() {
	
float nota, nota2, nota3;
	system("chcp 65001");	
	
	
	cout<<"Digite a primeira nota do aluno: ";
	cin>>nota;
	cout<<"Digite a segunda nota do aluno: ";
	cin>>nota2;
	cout<<"Digite a terceira nota do aluno: ";
	cin>>nota3;
	cout<<"A média do aluno é de: "<<(nota*0.2)+(nota2*0.3)+(nota3*0.5)<<"\n\n\n\n";
	
	
	
	
	
}