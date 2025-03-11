#pragma once

class CTest2
{
private:
	CString strData = _T( "" );
public:
	CTest2();
	~CTest2();
	CString GetData();
	void SetData( const CString src );
	void TimeSleep( int time );
};

