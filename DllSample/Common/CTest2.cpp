#include "pch.h"
#include "synchapi.h"
#include "CTest2.h"


CTest2::CTest2()
{
	
}

CTest2::~CTest2()
{
	
}

CString CTest2::GetData() 
{
	return this->strData;
}
void CTest2::SetData( const CString src )
{
	this->strData = src;
}

void CTest2::TimeSleep( int time )
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
