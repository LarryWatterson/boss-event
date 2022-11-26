#pragma once

class CAutoBossEvent : public singleton<CAutoBossEvent>
{
	enum eInfo
	{
		BOSS_EVENT_VNUM = 109,
		BOSS_EVENT_MP = 41,	
	};
	public:
		void	AddPlayer(LPCHARACTER ch);
		void	SpawnBoss();
	private:
		std::vector<LPCHARACTER> vec_player;
};
