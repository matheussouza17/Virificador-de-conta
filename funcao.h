#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<stdio.h>
#include<locale>
using namespace std;

int extrairDigito(int num) {
	int verificador;
	verificador = (((num % 10000) % 1000) % 100) % 10;
	return verificador;

}
int extrairNumero(int num) {
	int cod;
	cod = num / 10;
	return cod;
}

int calcularDigito(int num) {
	int d1, d2, d3, d4;
	int resul;
	d1 = num / 10000;
	d2 = (num % 10000) / 1000;
	d3 = ((num % 10000) % 1000) / 100;
	d4 = (((num % 10000) % 1000) % 100) / 10;
	//d5= (((cod % 10000) % 1000) % 100) % 10;
	resul = (d1 * 5) + (d2 * 4) + (d3 * 3) + (d4 * 2);
	resul = resul % 11;
	resul = 11 - resul;
	return resul;
}
bool verificarDigitoCorreto(int resul, int verificador) {
	int flag;
	if (resul == 10 || resul == 11) {
		if (verificador == 0) {
			flag = true;
		}
		else {
			flag = false;
		}
	}
	else if (verificador == resul) {
		flag = true;
	}
	else flag = false;

	return flag;
}




