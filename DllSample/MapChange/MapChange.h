// MapChange.h : MapChange DLL のメイン ヘッダー ファイル
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMapChangeApp
// このクラスの実装に関しては MapChange.cpp をご覧ください
//

class CMapChangeApp : public CWinApp
{
public:
	CMapChangeApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
