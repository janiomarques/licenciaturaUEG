/* 
 * File:   2.9.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 18:18
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */

int main() {
		float altura, raio, custo, areaBase, areaLateral, areaCilindro, pi, qtdLitros, qtdLatas;
		pi = 3.1416;
		std::setlocale(LC_ALL, "portuguese");

    std::cout << "\n \nInforme os dados do cilindro (em metros): \n";
    
std::cout << "\nRaio: ";
		std::cin >> raio;

    std::cout << "\nAltura: ";
		std::cin >> altura;

		areaBase = pi * pow(raio, 2);
		areaLateral = 2 * pi * raio * altura;
		areaCilindro = areaBase + areaLateral;
		qtdLitros = areaCilindro / 3;
		qtdLatas = qtdLitros / 5;
		custo = qtdLatas * 50;
		
    std::cout << "\n \nSerão gastos " << qtdLatas <<  " latas de tinta. \n \n";
    std::cout << "\n \nO custo total será de R$" << custo <<  ". \n \n";
 return 0;
}
