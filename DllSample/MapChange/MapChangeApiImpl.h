#pragma once
#include "MapChangeApi.h"
#include <mutex>

class MapChangeApiImpl :
    public MapChangeApi
{
private:
	static MapChangeApiImpl* m_instance;
	static std::mutex m_mutex;

	MapChangeApiImpl();
	~MapChangeApiImpl();

	MapChangeApiImpl( const MapChangeApiImpl& ) = delete;
	MapChangeApiImpl operator= ( const MapChangeApiImpl& ) = delete;
public:
    int MapChange( CallbackFunc callback );
	static MapChangeApiImpl* GetInstnce();
};
