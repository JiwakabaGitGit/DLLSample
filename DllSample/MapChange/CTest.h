#pragma once

class CTest
{
private:
	CString strData = _T( "" );
public:
	CTest();
	~CTest();
	CString GetData();
	void SetData( const CString src );
	void TimeSleep( int time );
};

