//6. FUP que leia o raio de uma circunferência e imprima o seu diâmetro, a sua circunferência e a sua área.


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	system("chcp 65001");	
	
	double raio;

    cout<<"Digite o raio da circunferencia: ";
    cin>>raio;

    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio;
    double area = M_PI * pow(raio, 2);
    
    cout<<"O diametro da circunferencia é de: " <<diametro<<"\n";
    cout<<"O Valor da circunferencia é de: " <<circunferencia<<"\n";
    cout<<"A area da circunferencia é de: " <<area;
	
		
	
}