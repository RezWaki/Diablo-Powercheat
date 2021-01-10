#include <Windows.h>
#include "powercheat.h"
#pragma comment( lib, "user32.lib" )

using namespace System;
using namespace System::Windows::Forms;
using namespace diablo_powercheat;

INT WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, INT ) {
	Application::Run( gcnew powercheat() );
	return TRUE;
}