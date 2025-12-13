#include "Enemy.h"
#include <stdio.h>


void (Enemy::* Enemy::UpdateTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Withdrawal,
};

void Enemy::Approach()
{
	printf("接近中\n");
	phase_++;
}

void Enemy::Shot()
{
	printf("射撃中\n");
	phase_++;
}

void Enemy::Withdrawal()
{
	printf("離脱中\n");
	isFinish_ = true;
}

void Enemy::Updata()
{
	(this->*UpdateTable[phase_])();
}

