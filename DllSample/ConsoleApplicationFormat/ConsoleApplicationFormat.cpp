// ConsoleApplicationFormat.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <string>
#include <vector>
#include <afx.h>
#include <afxwin.h>
#include <afxtempl.h>
#include <atlstr.h>
#include <iostream>
#include <fstream>
//#include <Windows.h>
#include "MapChangeCtrl.h"
//#include "../DllLibrary/DllAPI.h"
//#include "CSDKLibrary.h"

typedef void ( *CallbackFunc )( int );

void MyCallback( int value ) {
	std::cout << "Callback called with value: " << value << std::endl;
}

int main()
{
    using namespace std;

    //CSDKLibrary SDK;

    //// DLLのロード
    //if( !SDK.Load( _T( "DllLibrary.dll" ) ) )
    //{
    //    return 1;
    //}

    //// インスタンス作成
    //CExportSDK1& SDKLibrary = SDK.CreateSDK();

    //// クラスメソッドの呼び出し
    //INT sdkVersion = SDKLibrary.GetVersion();
    //INT classSize = SDKLibrary.GetClassSize();

    //wcout << "===== 確認テスト =====" << endl;
    //wcout << "SDK Version = " << sdkVersion << endl;
    //wcout << "Class Size (インスタンス) = " << classSize << endl;
    //wcout << "Class Size (CExportSDK1) = " << sizeof( CExportSDK1 ) << endl;

    //// インスタンス削除
    //SDK.DeleteSDK( SDKLibrary );

    //system( "pause" );

	int nRetCode = 0;
    MapChangeCtrl map;
    nRetCode = map.MapChange( MyCallback );
    std::cout << "Callback ret: " << nRetCode << std::endl;

    return 0;
}
