#ifndef MBASIC_H_
#define MBASIC_H_

#include <iostream>
#include "mbasic.h"
/** @brief chamada da library standart e do namespace mbasic */
using namespace std;
using namespace mbasic;
/** @brief chamada no namespace nbasic para atribuição */
namespace mbasic{
/** @details chamando o método add, o mesmo retornando um inteiro e chamando int v1 e int v2 para fazer a soma dos parâmetros */
	int Add(int v1, int v2){
		return v1 + v2;
	}
/** @details chamando o método Dif, o mesmo retornando um inteiro e chamando int v1 e int v2 para fazer a diferença dos parâmetros */
	int Dif(int v1, int v2){
		return v1 - v2;
	}
/** @details chamando o método Mux, o mesmo retornando um inteiro e chamando int v1 e int v2 para fazer a multiplicação dos parâmetros */
	int Mux(int v1, int v2){
		return v1 * v2;
	}
/** @details chamando o método Div, o mesmo retornando um float e chamando int v1 e int v2 para fazer a divisão dos parâmetros */
	float Div(int v1, int v2){
		return v1/v2;
	}
}

#endif
