#include "System.h"

int main()
{
	System system;

	system.Initialize();

	system.Run();

	system.Release();

	return 0;
}