#include "general.h"

int main()
{
#if _DEBUG
	Server MyServer(3555, true);
#else
	Server MyServer(3555, true);
#endif
	MyServer.ListenForNewConnection();

	MyServer.HandleInput();

	system("pause");
	return 0;
}