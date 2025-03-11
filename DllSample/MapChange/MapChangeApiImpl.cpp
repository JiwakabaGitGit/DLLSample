#include "pch.h"
#include "MapChangeApiImpl.h"
#include "CTest.h"

// static ƒƒ“ƒo[‚Ì‰Šú‰»
MapChangeApiImpl* MapChangeApiImpl::m_instance = nullptr;
std::mutex MapChangeApiImpl::m_mutex;

MapChangeApiImpl::MapChangeApiImpl()
{

}

MapChangeApiImpl::~MapChangeApiImpl()
{

}


int MapChangeApiImpl::MapChange( CallbackFunc callback )
{
	CTest test;
	test.SetData( _T( "hogehoge" ) );
	for( int i = 0; i < 5; ++i )
	{
		test.TimeSleep( 100 );
		callback( i );
	}

	return 0;
}

MapChangeApiImpl* MapChangeApiImpl::GetInstnce()
{
	std::lock_guard<std::mutex> lock( m_mutex );
	if( m_instance == nullptr )
	{
		m_instance = new MapChangeApiImpl();
	}
	return m_instance;
}
