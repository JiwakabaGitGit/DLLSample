// DllLibrary.h : DllLibrary DLL のメイン ヘッダー ファイル
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CDllLibraryApp
// このクラスの実装に関しては DllLibrary.cpp をご覧ください
//

class CDllLibraryApp : public CWinApp
{
public:
	CDllLibraryApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
