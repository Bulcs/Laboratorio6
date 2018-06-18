#include <iostream>
#include "mbasic.h"
/** @brief chamando a library standart e mbasic */
using namespace std;
using namespace mbasic;

int main(int argc, char const *argv[])
{
/**
	@brief Criação de 2 parâmetros inteiros para receber os 	números digitados 
	@param v1 representa o primeiro número 
	@param v2 representa o segundo número
*/
	int v1, v2;
	cout << "Digite os 2 números da operação[v1 e v2]" << endl;
	cin >> v1;
	cin >> v2;

	cout << "A soma: " << mbasic::Add(v1,v2) << endl;
	cout << "A diferença: " << mbasic::Dif(v1,v2) << endl;
	cout << "A multiplicação: " << mbasic::Mux(v1,v2) << endl;
	cout << "A divisão: " << mbasic::Div(v1,v2) << endl;


	return 0;
}
