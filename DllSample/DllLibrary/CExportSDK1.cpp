#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// �R���X�g���N�^
CExportSDK1::CExportSDK1()
{

}

// �f�X�g���N�^
CExportSDK1::~CExportSDK1()
{

}

// �C���X�^���X�쐬
CExportSDK1& CExportSDK1::CreateInstance( INT Version )
{
    // �o�[�W�����m�F
    if( Version != EXPORT_SDK_VER_1 )
    {
        AfxThrowNotSupportedException();
    }

    CDerivedSDK* pObject = new CDerivedSDK( Version );

    return *pObject;
}

// �C���X�^���X�폜
void CExportSDK1::DeleteInstance( CExportSDK1& Object )
{
    delete ( CDerivedSDK* )&Object;
}

// SDK�o�[�W�����̎擾
INT CExportSDK1::GetVersion() const
{
    AfxThrowNotSupportedException();
}

// �N���X�T�C�Y�̎擾
int CExportSDK1::GetClassSize()
{
    AfxThrowNotSupportedException();
}