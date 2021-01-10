#include "powerapi.h"

HANDLE pDiabloHndl;
HWND   pDiabloWnd;
DWORD  pDiabloPid;

BOOL PowerApi::FindDiablo( String^ wintitle ) {
	BOOL bResult = FALSE;
	if( pDiabloWnd = FindWindowA( NULL, (char*)Marshal::StringToHGlobalAnsi(wintitle).ToPointer() ) ) {
		bResult = TRUE;
		GetWindowThreadProcessId( pDiabloWnd, &pDiabloPid );
		pDiabloHndl = OpenProcess( PROCESS_ALL_ACCESS, TRUE, pDiabloPid );
	}
	return bResult;
}

BOOL PowerApi::WriteMemory( INT address, INT value ) {
	return WriteProcessMemory( pDiabloHndl, (LPVOID)address, &value, 4, NULL );
}