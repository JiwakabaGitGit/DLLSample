#pragma once
class DLL_API CExportSDK1
{
protected:
    // コンストラクタ
    CExportSDK1();

    // デストラクタ
    virtual ~CExportSDK1();

    CExportSDK1( const CExportSDK1& ) = delete;
    CExportSDK1 operator= ( const CExportSDK1& ) = delete;

public:
    // インスタンス作成/削除
    static CExportSDK1& CreateInstance( INT Version );
    static void DeleteInstance( CExportSDK1& Object );

    // メソッド
    virtual INT GetVersion() const;
    virtual INT GetClassSize();
};

