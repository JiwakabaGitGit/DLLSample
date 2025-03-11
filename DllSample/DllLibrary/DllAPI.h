#pragma once

// �G�N�X�|�[�g/�C���|�[�g��`
#ifdef _DLL_EXPORT
#define DLL_API   __declspec(dllexport)
#else
#define DLL_API   __declspec(dllimport)
#endif

// �o�[�W������`
#define EXPORT_SDK_VER_1    1

// �Ώۃo�[�W����
#define TARGET_SDK_VERSION  EXPORT_SDK_VER_1

#if TARGET_SDK_VERSION <= EXPORT_SDK_VER_1
#define CExportSDK CExportSDK1
#else
    // Not Implemented
#endif

// �N���X��`�̃C���N���[�h
#include "CExportSDK1.h"

// �֐��^ ��`
typedef CExportSDK& ( WINAPI* CREATEEXPORTSDK )( INT );

// �֐��^ ��`
typedef void ( WINAPI* DELETEEXPORTSDK )( CExportSDK& );

// �C���X�^���X�쐬
extern "C" DLL_API CExportSDK& WINAPI CreateExportSDK( INT Version );

// �C���X�^���X�폜
extern "C" DLL_API void WINAPI DeleteExportSDK( CExportSDK& Object );
