#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// �R���X�g���N�^
CDerivedSDK::CDerivedSDK( INT Version ) :
    m_Version( Version )
{

}

// �f�X�g���N�^
CDerivedSDK::~CDerivedSDK()
{

}

// SDK�o�[�W�����̎擾
INT CDerivedSDK::GetVersion() const
{
    return m_Version;
}

// �N���X�T�C�Y�̎擾
INT CDerivedSDK::GetClassSize()
{
    return sizeof( *this );
}
