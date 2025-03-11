#pragma once
class DLL_API CExportSDK1
{
protected:
    // �R���X�g���N�^
    CExportSDK1();

    // �f�X�g���N�^
    virtual ~CExportSDK1();

    CExportSDK1( const CExportSDK1& ) = delete;
    CExportSDK1 operator= ( const CExportSDK1& ) = delete;

public:
    // �C���X�^���X�쐬/�폜
    static CExportSDK1& CreateInstance( INT Version );
    static void DeleteInstance( CExportSDK1& Object );

    // ���\�b�h
    virtual INT GetVersion() const;
    virtual INT GetClassSize();
};

