#include "pch.h"
#include "DllAPI.h"
#include "CDerivedSDK.h"

// �C���X�^���X�쐬
CExportSDK& WINAPI CreateExportSDK( INT Version )
{
    CDerivedSDK* pObject = new CDerivedSDK( Version );

    return *pObject;
}

// �C���X�^���X�폜
void WINAPI DeleteExportSDK( CExportSDK& Object )
{
    delete ( CDerivedSDK* )&Object;
}
