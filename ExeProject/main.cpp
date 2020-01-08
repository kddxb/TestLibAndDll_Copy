#include <iostream>
#include "libProject.h"
#include "dllProject.h"

#pragma comment(lib,"DllProject.lib")
#pragma comment(lib,"LibProject.lib")

int main()
{
	fun_lib();
	fun_dll();
	system("pause");
	return 0;
}