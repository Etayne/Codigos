#include <iostream>
using namespace std;
int main() {



	string nombres;
	string nombre3 = "MobyDick";
	string nombre4 = "HarryPotter";
	string nombre5 = "StarWars";
	string nombre6 = "Depredador";
	string nombre7 = "Salir";

	while (true)
	{


		std::cout << "Bienvenido al buscador de Autores y fechas de libros y peliculas \n" << std::endl;
		std::cout << "libros > HarryPotter\n" << std::endl;
		std::cout << "Libros > MobyDick\n" << std::endl;
		std::cout << "Peliculas > StarWars\n" << std::endl;
		std::cout << "Peliculas > Depredador\n" << std::endl;
		std::cout << "Salir\n" << std::endl;

		std::cout << "Ingrese el nombre del Libro o pelicula \n";
		std::cin >> nombres;


		if (nombres == nombre3) {

			std::cout << "\nEl libro es Moby dick \n";
			std::cout << "El autor es Herman Melville\n";
			std::cout << "La fecha de salida 18 de octubre de 1851\n" << std::endl;
		}
		if (nombres == nombre4)
		{
			std::cout << "\nEl libro es Harry potter \n";
			std::cout << "El autor es J. K. Rowling\n";
			std::cout << "La fecha de salida es 31 de julio de 1980 \n" << std::endl;

		}
		if (nombres == nombre5)
		{
			std::cout << "\nLa pelicula se llama Star Wars\n";
			std::cout << "El Director es George Lucas\n";
			std::cout << "La fecha de salida es 23 de diciembre de 1977 \n" << std::endl;
		}
		if (nombres == nombre6)
		{
			std::cout << "\nLa pelicula es Depredador \n";
			std::cout << "El Director es John McTiernan \n";
			std::cout << "La fecha de salida es 12 de junio de 1987\n" << std::endl;
		}
		if (nombres == nombre7)
		{
			exit(3);
		}

	}

}