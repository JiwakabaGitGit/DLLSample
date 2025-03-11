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


// �񋟂������N���X�̎��Ԃ��擾������API
extern "C" MAP_CHANGE_API MapChangeApi* GetMapChangeInstnce( void );
