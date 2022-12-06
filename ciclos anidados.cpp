//danieelboy772 osea pompa
#include <iostream>
#include <windows.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			std::cout << "[" << i << "] " << "[" << j << "] " << std::endl;
			Sleep(250);
		}
		std::cout << std::endl;
	}
}