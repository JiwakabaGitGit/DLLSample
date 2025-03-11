#pragma once
#include "CExportSDK1.h"

class CDerivedSDK :
    public CExportSDK1
{
private:
    INT     m_Version;

public:
    // コンストラクタ
    CDerivedSDK( INT Version );

    // デストラクタ
    virtual ~CDerivedSDK();

    CDerivedSDK( const CDerivedSDK& ) = delete;
    CDerivedSDK operator= ( const CDerivedSDK& ) = delete;

public:
    // メソッド
    virtual INT GetVersion() const;
    virtual INT GetClassSize();
};

