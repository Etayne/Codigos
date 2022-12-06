// 2022_09_28_Operadores_Aritmeticos_002.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Juan Muñoz (cat)
// Eso es una calculadora



#include <iostream>
#include <cmath>

int main()
{
	int num, pot; 
	float suma, a, b, c, d, resta, multiplicacion, division, potencia, raiz;
	
	std::cout << "Ohaio Onii-chan\n";
	std::cout << "Ingrsese un numero prro " << std::endl;
	std::cin >> a;
	std::cout << "Ingrese otro numero estupido " << std::endl;
	std::cin >> b;

	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	potencia = pow(a, b);
	raiz = sqrt(a);


	std::cout << "El resultado es: " << std::endl;
	std::cout << "Suma " << suma << std::endl << "Resta: " << resta << std::endl << "Multiplicacion: " << multiplicacion << std::endl << "Division: " << division << std::endl; 
	std::cout << std::endl;

	std::cout << "Ingresa el numero que quieras elevar" << std::endl;
	std::cin >> num;
	std::cout << "Ingresa la potencia a la que la quiere elevar" << std::endl;
	std::cin >> pot;

	num = pow(num, pot);
	std::cout << "La potencia es " << num << std::endl;
	std::cout << std::endl;

	std::cout << "Ingrese un valor para sacar la raiz" << std::endl;
	std::cin >> c;
	d = sqrt(c);
	std::cout << "La raiz cuadrada de " << c << " es: " << d;
	std::cout << std::endl;



}