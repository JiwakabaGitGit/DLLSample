#include "CSDKLibrary.h"
#include "../DllLibrary/DllAPI.h"
#include "CSDKLibrary.h"

// コンストラクタ
CSDKLibrary::CSDKLibrary() :
    m_hHandle( nullptr ),
    m_CreateExportSDKFunc( nullptr ),
    m_DeleteExportSDKFunc( nullptr )
{

}

// デストラクタ
CSDKLibrary::~CSDKLibrary()
{
    ClearHandle();
}

// SDKの作成
CExportSDK& CSDKLibrary::CreateSDK()
{
    try
    {
        // クラスのインスタンスを作成
#ifdef _DYNAMIC_LINK
        return CExportSDK::CreateInstance( TARGET_SDK_VERSION );
#else
        return m_CreateExportSDKFunc( TARGET_SDK_VERSION );
#endif
    }
    catch( ... )
    {
        AfxThrowUserException();
    }
}

// SDKの削除
void CSDKLibrary::DeleteSDK( CExportSDK& Object )
{
    try
    {
        // クラスのインスタンスを破棄
#ifdef _DYNAMIC_LINK
        CExportSDK::DeleteInstance( Object );
#else
        m_DeleteExportSDKFunc( Object );
#endif
    }
    catch( ... )
    {
        AfxThrowUserException();
    }
}

// DLLのロード
BOOL CSDKLibrary::Load( CString FileName )
{
#ifdef _DYNAMIC_LINK
    return TRUE;
#endif

    // モジュールハンドルの確認
    if( m_hHandle != nullptr )
    {
        return TRUE;
    }

    // DLLファイルのロード
    m_hHandle = LoadLibrary( FileName );

    // モジュールハンドルの確認
    if( m_hHandle == nullptr )
    {
        return FALSE;
    }

    // 関数アドレスの取得
    m_CreateExportSDKFunc = ( CREATEEXPORTSDK )GetProcAddress( m_hHandle, "CreateExportSDK" );
    m_DeleteExportSDKFunc = ( DELETEEXPORTSDK )GetProcAddress( m_hHandle, "DeleteExportSDK" );

    // 関数アドレスを確認
    if( ( m_CreateExportSDKFunc == nullptr ) || ( m_DeleteExportSDKFunc == nullptr ) )
    {
        // ハンドルの解放
        ClearHandle();
        return FALSE;
    }

    return TRUE;
}

void CSDKLibrary::ClearHandle()
{
    // DLLの解放
    if( m_hHandle != nullptr )
    {
        FreeLibrary( m_hHandle );
        m_hHandle = nullptr;
    }

    // 関数アドレス初期化
    m_CreateExportSDKFunc = nullptr;
    m_DeleteExportSDKFunc = nullptr;
}
