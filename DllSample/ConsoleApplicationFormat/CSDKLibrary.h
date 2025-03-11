#pragma once

#include <string>
#include <vector>
#include <afx.h>
#include <afxwin.h>
#include <afxtempl.h>
#include <atlstr.h>
#include <iostream>
#include <fstream>
#include <Windows.h>
#include "../DllLibrary/DllAPI.h"
#ifdef _DYNAMIC_LINK
#pragma comment(lib, "DllLibrary.lib")
#endif

// �N���X��`
class CSDKLibrary
{
private:
    HMODULE             m_hHandle;
    CREATEEXPORTSDK     m_CreateExportSDKFunc;
    DELETEEXPORTSDK     m_DeleteExportSDKFunc;

public:
    // �R���X�g���N�^
    CSDKLibrary();

    // �f�X�g���N�^
    virtual ~CSDKLibrary();

    // ���\�b�h
    BOOL Load( CString FileName );
    CExportSDK& CreateSDK();
    void DeleteSDK( CExportSDK& Object );

protected:
    // ���\�b�h
    void ClearHandle();
};