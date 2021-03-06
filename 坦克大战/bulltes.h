#pragma once
#include"functions.h"
#include"Picture.h"
#include"Music.h"
#include"map.h"

class tanke_enemy;
class tank_player;

class bulltes
{
public:
	bulltes();
	~bulltes();

	void update(map & map, int(*tankmap)[26], int(*bulltemap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);
	void render(Picture& picture);

	void init(int isplayer, int aimx, int aimy, direction direct, int speed);
	void BulletHit(map & map, gameState & state);
	
	void BulletHitPlus(map & map, int(*tankmap)[26], int(*bulltemap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void BulletHitPlus(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void BulletHitPlus(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);
	
	void BulletHit_bullte(map & map, int(*tankmap)[26], int(*bulltemap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void BulletHit_bullte(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void BulletHit_bullte(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);
	
	bool Canfire();
	
	bool Canmove(map & map, int(*tankmap)[26], int(*bulltemap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	bool Canmove(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	bool Canmove(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);

	void update_move(map & map, int(*tankmap)[26], int(*bulltemap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update_move(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update_move(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);
	
	void update_xy();

	void creatProp(int x,int y, queue<prop*>& propertyQueue);
public:
	Music music;
	direction direct;
	bool bullet;

	int x;
	int y;
	int aimx;
	int aimy;
	int count;
	int speed;
	int isplayer;
};

