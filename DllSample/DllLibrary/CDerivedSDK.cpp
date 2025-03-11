#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// コンストラクタ
CDerivedSDK::CDerivedSDK( INT Version ) :
    m_Version( Version )
{

}

// デストラクタ
CDerivedSDK::~CDerivedSDK()
{

}

// SDKバージョンの取得
INT CDerivedSDK::GetVersion() const
{
    return m_Version;
}

// クラスサイズの取得
INT CDerivedSDK::GetClassSize()
{
    return sizeof( *this );
}
