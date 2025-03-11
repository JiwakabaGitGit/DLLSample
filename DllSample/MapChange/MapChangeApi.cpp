#include "pch.h"
#include "MapChangeApi.h"
#include "MapChangeApiImpl.h"
//
//MapChangeApiImpl* MapChangeApi::GetInstance()
//{
//	return MapChangeApiImpl::GetInstance();
//}

MAP_CHANGE_API MapChangeApi* GetMapChangeInstnce( void )
{
	return MapChangeApiImpl::GetInstnce();
}
