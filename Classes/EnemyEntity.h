#ifndef ENEMYENTITY_H_
#define ENEMYENTITY_H_

#include "cocos2d.h"
#include "Entity.h"

class EnemyEntity : public Entity {
public:
	static const int EnemyTypeVirus = 0;
//	static const int EnemyTypeBoss = 1;
	static const int EnemyType_MAX = 1;
	int type;

	static EnemyEntity* enemyWithType(int enemyType);
	static int getSpawnFrequencyForEnemyType(int enemyType);
	static void spawn(EnemyEntity *entity);
	void gotHit();

	CREATE_FUNC(EnemyEntity);
private:
	static void initSpawnFrequency(EnemyEntity *entity);
};

#endif
