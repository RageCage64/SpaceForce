#pragma once
#include <vector>

#include "enums.h"
#include "bullet.h"
#include "ship.h"

class ObjectManager {
public:
	Ship* player;
	std::vector<Ship*> enemies;
	std::vector<Bullet*> player_bullets;
	std::vector<Bullet*> enemy_bullets;

	ObjectManager();

	void initiate(Ship* _player);
	bool chk_player_col();
	int chk_bullet_col();
	void draw_objects();
	void destroy_objects();
	void move_enemies();

private:
	bool col_eval(Hitbox h1, Hitbox h2);
};