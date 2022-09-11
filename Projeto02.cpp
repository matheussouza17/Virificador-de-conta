#include<iostream>
#include<iomanip>
#include "funcao.h"

/*Questão2 - (usarfunções) Para evitar erros de digitação em números de grande importância, como código de uma conta bancária,
geralmente se adiciona ao número um dígito verificador. Por exemplo, o número 1841 é utilizado normalmente como 18414, ondeo 4
é odígito verificador. Ele é calculado da seguinte forma:
a)Cada algarismo do número é multiplicado por um peso começando de 2 da direita paraa esquerda.
Para cada algarismo o peso é acrescido de 1 . Soma - se os produtos obtidos. 1x5 + 8x4 + 4x3 + 1x2 = 51

b) Calcula - se o resto da divisão desta soma por 11:51 % 11 = 7

c)Subtrai - se de 11 o resto obtido:11 - 7 = 4

d)Se o valor obtido for 10 ou 11,o dígito verificador será o 0, nos outros casos, o dígito verificador é opróprio valore ncontrado.


Escreva um programa que leia um número indeterminado de valores inteiros de 10000 a 99999.Para cada número compare o digito
verificador extraído, do valor lido, como calculado e conclua se o número lido é válido ou não.Imprima o número digitado,
os dígitos verificadores extraído se calculados e a conclusão.O programa é encerradoao ser fornecido
um número fora da faixa estabelecida (10000a99999).Utilize as funções:extrairDigito, extrairNumero,
calcularDigitoeverificarDigitoCorreto.*/


using namespace std;
int main() {
	int cod, num = 10001, verificador, resul;
	bool flag;
	while (num > 10000 && num < 99999) {
		cout << endl << "Digite numero da conta: ";
		cin >> num;
		verificador = extrairDigito(num);
		cod = extrairNumero(num);
		resul = calcularDigito(num);
		flag = verificarDigitoCorreto(resul, verificador);
		//system("cls");
		if (num > 10000 && num < 99999) {
			printf("\tDETALHES\n\n");
			printf("Numero do codigo da conta digitado = %d\n", num);
			printf("Numero do digito verificador = %d\n", verificador);
			printf("Numero da conta = %d\n", cod);
			if (flag == true) printf("Numero de conta VALIDO!!\n");
			else printf("Numero de conta INVALIDO!!\n");
		}

	}

	cout << endl << "\tFIM DE PROGRAMA \n\tby Matheus Henrique Souza\n" << endl;

	return 0;



}