#pragma once

#ifdef MAP_CHANGE_EXPORTS
#define MAP_CHANGE_API __declspec(dllexport)
#else
#define MAP_CHANGE_API __declspec(dllimport)
#endif


typedef void ( *CallbackFunc )( int );

class MapChangeApi
{

public:
	virtual int MapChange( CallbackFunc callback ) = 0;
};


// 提供したいクラスの実態を取得させるAPI
extern "C" MAP_CHANGE_API MapChangeApi* GetMapChangeInstnce( void );
