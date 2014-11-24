#include "player_manager.h"

template<> 
LogicPlayerManager* Singleton<LogicPlayerManager>::_instance = 0;

LogicPlayer*    LogicPlayerManager::GetPlayer(int ply_id)
{
    auto itr = _player_map.find(ply_id);
    if(itr != _player_map.end())
    {
        return itr->second; 
    }
    return NULL;
}

void    LogicPlayerManager::AddPlayer(int ply_id,LogicPlayer* player)
{
    _player_map[ply_id] = player;
}



