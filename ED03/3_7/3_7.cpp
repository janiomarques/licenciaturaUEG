/* 
 * File:   3_6.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 20:18
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */

int main() {
	string nome;
	double lado1, lado2, media1, lado3;
	std::setlocale(LC_ALL, "portuguese");

	std::cout << "Lado 1: ";
	std::cin >> lado1;

	std::cout << "Lado 2: ";
	std::cin >> lado2;

	std::cout << "Lado 3: ";
	std::cin >> lado3;

	if (lado1 == lado2 && lado2 == lado3) {
		std::cout << "\nTriângulo Equilátero \n \n";
	}else{
		if (lado1 == lado2 || lado2 == lado3){
			std::cout << "\nTriângulo Isósceles \n \n";
		}else{
			if (lado1 != lado2 || lado2 != lado3){
				std::cout << "\nTriângulo Escaleno \n \n";
			}
		}
	}

	return 0;
}
