#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// インスタンス作成
CExportSDK& WINAPI CreateExportSDK( INT Version )
{
    CDerivedSDK* pObject = new CDerivedSDK( Version );

    return *pObject;
}

// インスタンス削除
void WINAPI DeleteExportSDK( CExportSDK& Object )
{
    delete ( CDerivedSDK* )&Object;
}
