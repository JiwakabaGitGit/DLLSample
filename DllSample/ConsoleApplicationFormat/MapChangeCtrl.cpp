#include "MapChangeCtrl.h"
#include <iostream>

typedef MapChangeApi* ( *MapChangeFunc )( void );

MapChangeCtrl::MapChangeCtrl()
{
    MapChangeApi* hoge = GetMapChangeInstnce();
    MapChangeApi* hoge1 = GetMapChangeInstnce();

    MapChangeApi* hoge2 = GetMapChangeInstnce();

    MapChangeApi* hoge3 = GetMapChangeInstnce();

    MapChangeApi* hoge4 = GetMapChangeInstnce();

    m_pMapChange = GetMapChangeInstnce();
}

MapChangeCtrl::~MapChangeCtrl()
{
    //FreeLibrary( m_hModule );
}



int MapChangeCtrl::MapChange( CallbackFunc callback )
{
    MapChangeApi* hoge = GetMapChangeInstnce();
    MapChangeApi* hoge1 = GetMapChangeInstnce();

    MapChangeApi* hoge2 = GetMapChangeInstnce();

    MapChangeApi* hoge3 = GetMapChangeInstnce();

    MapChangeApi* hoge4 = GetMapChangeInstnce();

    return m_pMapChange->MapChange( callback );
}