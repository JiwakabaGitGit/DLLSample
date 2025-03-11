#include "pch.h"
#include "synchapi.h"
#include "CTest.h"


CTest::CTest()
{
	
}

CTest::~CTest()
{
	
}

CString CTest::GetData() 
{
	return this->strData;
}
void CTest::SetData( const CString src )
{
	this->strData = src;
}

void CTest::TimeSleep( int time )
{
	try
	{
		Sleep( time );
	}
	catch( char* str )
	{
		int i = 0;
	}
}
