#pragma once
#include "CExportSDK1.h"

class CDerivedSDK :
    public CExportSDK1
{
private:
    INT     m_Version;

public:
    // �R���X�g���N�^
    CDerivedSDK( INT Version );

    // �f�X�g���N�^
    virtual ~CDerivedSDK();

    CDerivedSDK( const CDerivedSDK& ) = delete;
    CDerivedSDK operator= ( const CDerivedSDK& ) = delete;

public:
    // ���\�b�h
    virtual INT GetVersion() const;
    virtual INT GetClassSize();
};

