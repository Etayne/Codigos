// teorema_De_Bayes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <MMsystem.h>
using namespace std;



int main()
{
	bool opc1 = false;
	float A = 0;
	float BA = 0;
	float B = 0;
	int regresar = 0;


	Sleep(1);
       
        /*Intro*/
        Beep(330, 100); Sleep(10);
        Beep(330, 100); Sleep(30);
        Beep(330, 100); Sleep(30);
        Beep(262, 100); Sleep(10);
		cout << "% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"  << endl;
        Beep(330, 100); Sleep(30);
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
        Beep(392, 100); Sleep(70);
		cout << "%%%%%      %%     %%%     %%%%         %%%%%     %%%%%%%%         %%%%      %%%%" << endl;
        Beep(196, 100); Sleep(70);
		cout << "%%%%%      %%     #%%     %%/            %%%     %%%%%%%*         %%%%      %%%%" << endl;
        Beep(196, 100); Sleep(12);
		cout << "%%%%%(     %%     (%%     %%      %%      %%     %%%%%%%           %%%      %%%%" << endl;
        Beep(262, 100); Sleep(12);
		cout << "%%%%%/     %%             %%      %%      %%     %%%%%%%           %%%      %%%%" << endl;
        Beep(330, 100); Sleep(12);
		cout << "%%%%%/     %%             %%      %%      %%     %%%%%%     %%     %%%      %%%%" << endl;
        Beep(392, 100); Sleep(12);
		cout << "%%%%%/     %%      %%     %%      %%      %%     %%%%%%     %%      %%      %%%%" << endl;
        Beep(523, 100); Sleep(12);
		cout << "%%%%%/     %%      %%     %%             %%%         %              %%%%  %%%%%%" << endl;
        Beep(660, 100); Sleep(12);
		cout << "%%%%%*     %%      %%     %%%            %%%         %     %%%%     %%      %%%%" << endl;
        Beep(784, 100); Sleep(57);
		cout << "%%%%%*     %%      %%     %%%%%%      %%%%%%               %%%%%     %#    %%%%%" << endl;
        Beep(660, 100); Sleep(57);
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
        Beep(207, 100); Sleep(12);
        Beep(262, 100); Sleep(12);
        Beep(311, 100); Sleep(12);
        Beep(415, 100); Sleep(12);
        Beep(523, 100); Sleep(12);
        Beep(622, 100); Sleep(12);
        Beep(830, 100); Sleep(57);
        Beep(622, 100); Sleep(57);
        Beep(233, 100); Sleep(12);
        Beep(294, 100); Sleep(12);
        Beep(349, 100); Sleep(12);
        Beep(466, 100); Sleep(12);
        Beep(587, 100); Sleep(12);
        Beep(698, 100); Sleep(12);
        Beep(932, 100); Sleep(57);
        Beep(932, 100); Sleep(12);
        Beep(932, 100); Sleep(12);
        Beep(932, 100); Sleep(12);
        Beep(1046, 67);


 
	
		std::cout << " hola estudiante te ayudare haciendo una calculadora de bayes " << std::endl;
		Sleep(100);
		std::cout << " primero te explicare como funciona la calculadora " << std::endl;
		Sleep(10);

		std::cout << " formula : P(A/B) = P(A) * P(B/A) / P(B) " << std::endl;
		Sleep(10);
		std::cout << " la formula de el teorema de bayes dice B es el suceso que conocemos,\n A el conjunto de posibles causas, excluyentes entre si, que pueden producirlo y,\n por tanto, P(A/B) son las posibilidades a posteriori, P(A) las posibilidades a priori y P(B/A) la posibilidad de que se de B en cada hipotesis de A.\n esta es la formula que usaremos  " << std::endl;
		Sleep(100);
		std::cout << " para hacerlo mas facil de comprender te dare un ejemplo \n despues cambiamos los datos " << std::endl;
		Sleep(100);
		std::cout << " la maestra en su salon el 40%(B) de sus alumnos no pone atencion ademas el 10%(A) de sus alumnos son hombres, la probabilidad de que un alumno no ponga atencion dado que es hombre es 50%(B/A), calcular la probabilidad hay de que ese alumno es  hombre, ya que no pone atencion " << std::endl;
		Sleep(100);
		std::cout << " formula : P(A/B) = P(10) * P(50) / P(40) " << std::endl;
		Sleep(100);
		std::cout << 10 * 50 / 40 << "%";
		Sleep(100);
		std::cout << " ves es muy facil ahora rellena tus datos " << std::endl;
		Sleep(1000);
		do
		{
		std::cout << " formula : P(A/B) = P(  *?*  ) * P(B/A) / P(B) \n ingresa A" << std::endl;
		std::cin >> A;

		std::cout << " formula : P(A/B) = P(" << A << ") * P(  *?*  ) / P(B) \n ingresa B/A " << std::endl;
		std::cin >> BA;

		std::cout << " formula : P(A/B) = P(" << A << ") * P(" << BA << ") / P(    *?*   ) \n ingresa B " << std::endl;
		std::cin >> B;
		Sleep(100);

		std::cout << " formula : P(A/B) = P(" << A << ") * P(" << BA << ") / P(" << B << ") " << std::endl;
		Sleep(1000);

		std::cout << A * BA / B << "%" << std::endl;

		Sleep(1000);

		do {
			std::cout << "quieres repetir ? 1-si  2-no " << std::endl;
		std::cin >> regresar;

			switch (regresar)
			{
			case 1:  opc1 = true;
				break;
			case 2: return 0;
				break;
			default:std::cout << "esa no es una opcion" << std::endl;
				break;
			}
		} while (opc1==false);
		

		



	} while (opc1==true);
	
	
	
}
