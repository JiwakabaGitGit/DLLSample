#pragma once

// エクスポート/インポート定義
#ifdef _DLL_EXPORT
#define DLL_API   __declspec(dllexport)
#else
#define DLL_API   __declspec(dllimport)
#endif

// バージョン定義
#define EXPORT_SDK_VER_1    1

// 対象バージョン
#define TARGET_SDK_VERSION  EXPORT_SDK_VER_1

#if TARGET_SDK_VERSION <= EXPORT_SDK_VER_1
#define CExportSDK CExportSDK1
#else
    // Not Implemented
#endif

// クラス定義のインクルード
#include "CExportSDK1.h"

// 関数型 定義
typedef CExportSDK& ( WINAPI* CREATEEXPORTSDK )( INT );

// 関数型 定義
typedef void ( WINAPI* DELETEEXPORTSDK )( CExportSDK& );

// インスタンス作成
extern "C" DLL_API CExportSDK& WINAPI CreateExportSDK( INT Version );

// インスタンス削除
extern "C" DLL_API void WINAPI DeleteExportSDK( CExportSDK& Object );
