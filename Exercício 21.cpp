//FUP para uma Investigação Criminal. Faça 8 perguntas para uma pessoa sobre um crime.


#include  <iostream> 

using namespace std; 


main (){
	system("chcp 65001");
	system("cls");
	
	
    string resposta;
    int contador = 0;

    cout<<"Trocou mensagens com a vitima? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"Esteve no local do crime? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"E parente ou reside perto da vitima? (sim/nao): ";
    cin >> resposta;
    if (resposta == "sim") contador++;

    cout<<"Devia algum valor para a vitima? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"Trabalha ou trabalhou com a vitima? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"Possui algum tipo de relacionamento amoroso com a vitima? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"Ficou feliz pelo destino fatidico na vitima? (sim/nao): ";
    cin>>resposta;
    if (resposta == "sim") contador++;

    cout<<"Possui algum tipo de arma de fogo? (sim/nao): ";
    cin>>resposta;
    
    if (resposta == "sim") contador++;

    if (contador == 4) {
    cout<<"Suspeito do Crime";
    } 
	else if (contador >= 5 && contador <= 7) {
    cout<<"Possivel Criminoso";
    } 
	else if (contador == 8) {
    cout<<"Assassino";
    } 
	else {
    cout<<"Inocente";
    }
}