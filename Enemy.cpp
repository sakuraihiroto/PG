#include "Enemy.h"

void Enemy::SetAlive(bool isAlive)
{
	isAlive_ = isAlive;
}

void Enemy::Print()
{
	if (isAlive_) { printf("¶‘¶\n"); }
	else { printf("Á–Å\n"); }
}