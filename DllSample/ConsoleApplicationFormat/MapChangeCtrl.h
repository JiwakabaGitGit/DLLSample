#pragma once
//#include <Windows.h>
#include <string>
#include <vector>
#include <afx.h>
#include <afxwin.h>
#include <afxtempl.h>
#include <atlstr.h>
#include "../MapChange/MapChangeApi.h"

#ifdef _DYNAMIC_LINK
#pragma comment(lib, "DllLibrary.lib")
#endif

class MapChangeCtrl
{
public:
	MapChangeCtrl();
	~MapChangeCtrl();
	//bool Load( CString FileName );
	int MapChange( CallbackFunc callback );

private:
	//HMODULE m_hModule;
	MapChangeApi* m_pMapChange = NULL;		// MapChangeä÷êîÉ|ÉCÉìÉ^
};

