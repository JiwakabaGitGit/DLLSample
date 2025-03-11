#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// コンストラクタ
CExportSDK1::CExportSDK1()
{

}

// デストラクタ
CExportSDK1::~CExportSDK1()
{

}

// インスタンス作成
CExportSDK1& CExportSDK1::CreateInstance( INT Version )
{
    // バージョン確認
    if( Version != EXPORT_SDK_VER_1 )
    {
        AfxThrowNotSupportedException();
    }

    CDerivedSDK* pObject = new CDerivedSDK( Version );

    return *pObject;
}

// インスタンス削除
void CExportSDK1::DeleteInstance( CExportSDK1& Object )
{
    delete ( CDerivedSDK* )&Object;
}

// SDKバージョンの取得
INT CExportSDK1::GetVersion() const
{
    AfxThrowNotSupportedException();
}

// クラスサイズの取得
int CExportSDK1::GetClassSize()
{
    AfxThrowNotSupportedException();
}