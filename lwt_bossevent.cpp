#include "stdafx.h"
#define ENABLE_BOSS_EVENT 
#ifdef ENABLE_BOSS_EVENT
#include "lwt_bossevent.h"
#include "char_manager.h"
// #define LOGS

void CAutoBossEvent::AddPlayer(LPCHARACTER ch)
{
	vec_player.emplace_back(ch);
#ifdef LOGS
	sys_err("Boss Event player : '%s' vec size : %d", ch->GetName(), vec_player.size());
#endif
}

void CAutoBossEvent::SpawnBoss()
{
	for(const auto& it : vec_player)
	{
		CHARACTER_MANAGER::instance().SpawnMob(BOSS_EVENT_VNUM, BOSS_EVENT_MP, it->GetX(), it->GetY(), 0, false, 360);
	}
	vec_player.clear();
}
#endif
