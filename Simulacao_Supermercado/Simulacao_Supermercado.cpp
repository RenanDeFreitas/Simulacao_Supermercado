// Simulacao_Supermercado.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "Fila.h"
#include "Cliente.h"
#include<iostream>
using namespace std;

int main()
{
	int qtdFilas = 3;
	//cout << "Insira o numero de filas";
	//cin >> qtdFilas;

	Fila<Cliente> *caixas = new Fila<Cliente>[qtdFilas];

	for (int i = 0; i < qtdFilas; i++)
	{
		inicializarFila(caixas[i]);
	}

	for (int ut = 0; ut < 10000; ut++) {
		chegadaDeClientes(caixas, qtdFilas);
		//AtendimentoCliente
	}

	//teste
	//cout << caixas[0].qtd;

	//Calcular a media
	//int mediaDeClientesPorFila = 0;
	//for (int i = 0; i < qtdFilas; i++) {
	//	mediaDeClientesPorFila = mediaDeClientesPorFila + caixa[i].qtd;
	//}

	//mediaDeClientesPorFila = mediaDeClientesPorFila / qtdFilas;
	//cout << "A média de clientes por fila é: " << mediaDeClientesPorFila;

}

