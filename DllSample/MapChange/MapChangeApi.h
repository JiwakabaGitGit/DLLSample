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


// ’ñ‹Ÿ‚µ‚½‚¢ƒNƒ‰ƒX‚ÌŽÀ‘Ô‚ðŽæ“¾‚³‚¹‚éAPI
extern "C" MAP_CHANGE_API MapChangeApi* GetMapChangeInstnce( void );
