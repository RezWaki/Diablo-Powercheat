#include <Windows.h>
#include <msclr\marshal.h>

using namespace msclr::interop;
using namespace System::Runtime::InteropServices;
using namespace System;

namespace PowerApi{
	BOOL FindDiablo( String^ wintitle );
	BOOL WriteMemory( INT address, INT value );
}