// Adivina_who.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Cat

#include <iostream>
#include <string>

int main()
{
	std::string cabello;
	std::string ojos;
	std::string ciudad;
	std::string sexo;
	std::string color;

	std::cout << "Adivina Who!!!!\n";
	std::cout << "Tus personajes son Kishi, Mau, Caro, Mariana\n";
	std::cout << "Kishi es de Puebla\n";
	std::cout << "Mau es de Puebla\n";
	std::cout << "Caro es de Guadalajara\n";
	std::cout << "Mariana es de Guadalajara\n";

	std::cout << "De que color es el cabello de tu personaje?\n";
	std::cin >> cabello;
	if (cabello == "rubio")
	{
		std::cout << "OK es rubio\n";
		std::cout << "Color de ojos?\n";
		std::cin >> ojos;
		if (ojos == "azules")
		{
			std::cout << "OK son azules\n";
			std::cout << "De donde es?\n";
			std::cin >> ciudad;
			if (ciudad == "puebla")
			{
				std::cout << "Ok es pipope\n";
				std::cout << "Hombre?\n";
				std::cin >> sexo;
				if (sexo == "si")
				{
					std::cout << "Ok es hombre\n";
					std::cout << "De que color es?\n";
					std::cin >> color;
					if (color == "blanca")
					{
						std::cout << "Tu personaje es Kishi\n";
					}
					if (color == "cafe")
					{
						std::cout << "Tu personaje es Mau" << std::endl;
					}
				}
			}
		}
	}
	if (cabello == "negro")
	{
		std::cout << "OK tiene el cabello negro\n";
		std::cout << "Color de ojos?\n";
		std::cin >> ojos;
		if (ojos == "negros")
		{
			std::cout << "Ok tiene los ojos negros\n";
			std::cout << "De donde es?\n";
			std::cin >> ciudad;
			if (ciudad == "guadalajara")
			{
				std::cout << "OK es de guadalajara\n";
				std::cout << "Mujer o Hombre?\n";
				std::cin >> sexo;
				if (sexo == "mujer")
				{
					std::cout << "Ok entonces es mujer\n";
					std::cout << "De que color es?\n";
					std::cin >> color;
					if (color == "blanca")
					{
						std::cout << "Tu personaje es Caro\n";
					}
					if (color == "negra")
					{
						std::cout << "Tu personaje es Mariana\n";
					}
				}
			}
		}
	}
}