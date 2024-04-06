//7. FUP que leia um valor em quilometros e converta para metros e centimetros;


#include <iostream>

using namespace std;

int main() {
	
	system("chcp 65001");	
	double km;
	cout<<"Digite os Quilometros a serem convertidos: ";
	cin>>km;
	
	int metros = km*1000;
	int centimetros = km*100000;
	
	cout<<"O Valor em metros é de: " <<metros<< " Metros \n";
	cout<<"O Valor em centimentros é de: " <<centimetros<< " cm ";
	
}
	
	