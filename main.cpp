#include "Enemy.h"

bool Enemy::isAlive_ = true;

int main()
{
	std::array<Enemy, 5> enemy{};
	// �G��Ԃ�\��
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n�G%d:", i);

		enemy[i].Print();
	}

	enemy[4].SetAlive(false);

	printf("\n�G4��|���܂���\n");

	// �G��Ԃ��ĕ\��
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n�G%d:", i);

		enemy[i].Print();
	}

	return 0;
}