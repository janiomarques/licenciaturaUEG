/* 
 * File:   2.4.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 18:18
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main() {
		double dFuncionario, dMatConsumo, dAgua, dTelefone, rMensalidades, rFestas, rDoacoes, lucro;
		int tempo;
		std::setlocale(LC_ALL, "portuguese");
		std::cout << "------------------Despesas------------------\n \n";

		std::cout << "Funcionários: ";
		std::cin >> dFuncionario;

		std::cout << "Material de consumo: ";
		std::cin >> dMatConsumo;

		std::cout << "Água: ";
		std::cin >> dAgua;

		std::cout << "Telefone: ";
		std::cin >> dTelefone;

		std::cout << "\n \n------------------Receitas------------------\n \n";

		std::cout << "Mensalidades: ";
		std::cin >> rMensalidades;

		std::cout << "Festas: ";
		std::cin >> rFestas;

		std::cout << "Doações: ";
		std::cin >> rDoacoes;

		lucro = (rMensalidades + rFestas + rDoacoes) - (dFuncionario + dMatConsumo + dAgua + dTelefone);

    std::cout << "\n \nO valor do lucro da escola é de " << lucro << ".\n \n";   
 return 0;
}
