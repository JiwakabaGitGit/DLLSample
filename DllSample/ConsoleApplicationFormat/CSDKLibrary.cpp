#include "CSDKLibrary.h"
#include "../DllLibrary/DllAPI.h"
#include "CSDKLibrary.h"

// �R���X�g���N�^
CSDKLibrary::CSDKLibrary() :
    m_hHandle( nullptr ),
    m_CreateExportSDKFunc( nullptr ),
    m_DeleteExportSDKFunc( nullptr )
{

}

// �f�X�g���N�^
CSDKLibrary::~CSDKLibrary()
{
    ClearHandle();
}

// SDK�̍쐬
CExportSDK& CSDKLibrary::CreateSDK()
{
    try
    {
        // �N���X�̃C���X�^���X���쐬
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

// SDK�̍폜
void CSDKLibrary::DeleteSDK( CExportSDK& Object )
{
    try
    {
        // �N���X�̃C���X�^���X��j��
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

// DLL�̃��[�h
BOOL CSDKLibrary::Load( CString FileName )
{
#ifdef _DYNAMIC_LINK
    return TRUE;
#endif

    // ���W���[���n���h���̊m�F
    if( m_hHandle != nullptr )
    {
        return TRUE;
    }

    // DLL�t�@�C���̃��[�h
    m_hHandle = LoadLibrary( FileName );

    // ���W���[���n���h���̊m�F
    if( m_hHandle == nullptr )
    {
        return FALSE;
    }

    // �֐��A�h���X�̎擾
    m_CreateExportSDKFunc = ( CREATEEXPORTSDK )GetProcAddress( m_hHandle, "CreateExportSDK" );
    m_DeleteExportSDKFunc = ( DELETEEXPORTSDK )GetProcAddress( m_hHandle, "DeleteExportSDK" );

    // �֐��A�h���X���m�F
    if( ( m_CreateExportSDKFunc == nullptr ) || ( m_DeleteExportSDKFunc == nullptr ) )
    {
        // �n���h���̉��
        ClearHandle();
        return FALSE;
    }

    return TRUE;
}

void CSDKLibrary::ClearHandle()
{
    // DLL�̉��
    if( m_hHandle != nullptr )
    {
        FreeLibrary( m_hHandle );
        m_hHandle = nullptr;
    }

    // �֐��A�h���X������
    m_CreateExportSDKFunc = nullptr;
    m_DeleteExportSDKFunc = nullptr;
}
