/* 
 * File:   2.6.cpp
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
		double raio, pi, area;
		pi = 3.1416;
		std::setlocale(LC_ALL, "portuguese");
		std::cout << "Informe o Raio (em Metros) da circunferência: ";
		std::cin >> raio;

		area = pi * pow(raio, 2);

    std::cout << "\n \nA área da circunferência é de:  " << area << "m².\n \n";   
 return 0;
}
